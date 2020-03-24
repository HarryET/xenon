#include <san/Compiler.hpp>

#include <llvm/IR/LegacyPassManager.h>

#include <llvm/Support/FileSystem.h>
#include <llvm/Support/TargetRegistry.h>
#include <llvm/Support/TargetSelect.h>

#include <llvm/Target/TargetMachine.h>

#include <llvm/Transforms/InstCombine/InstCombine.h>
#include <llvm/Transforms/Scalar.h>
#include <llvm/Transforms/Scalar/GVN.h>

std::vector<std::string> San::Compiler::generate_objects()
{
    llvm::InitializeAllTargetInfos();
    llvm::InitializeAllTargets();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllAsmParsers();
    llvm::InitializeAllAsmPrinters();

    std::string error;
    std::string target_triple = llvm::sys::getDefaultTargetTriple();
    const llvm::Target *target = llvm::TargetRegistry::lookupTarget(target_triple, error);

    if (!target)
    {
        llvm::errs() << error;
        return {};
    }

    std::string cpu = "generic";
    std::string features = "";

    llvm::TargetOptions target_options;
    llvm::Optional<llvm::Reloc::Model> rm = llvm::Optional<llvm::Reloc::Model>();
    llvm::TargetMachine *target_machine = target->createTargetMachine(target_triple, cpu, features, target_options, rm);

    this->module->setDataLayout(target_machine->createDataLayout());
    this->module->setTargetTriple(target_triple);

    std::string output_path = std::tmpnam(nullptr);
    std::error_code error_code;
    llvm::raw_fd_ostream dest(output_path, error_code, llvm::sys::fs::OF_None);

    if (error_code)
    {
        llvm::errs() << "Could not open file: " << error_code.message();
        return {};
    }

    llvm::legacy::PassManager pass;

    pass.add(llvm::createInstructionCombiningPass());
    pass.add(llvm::createReassociatePass());
    pass.add(llvm::createGVNPass());
    pass.add(llvm::createCFGSimplificationPass());

    llvm::TargetMachine::CodeGenFileType file_type = llvm::TargetMachine::CGFT_ObjectFile;

    if (target_machine->addPassesToEmitFile(pass, dest, nullptr, file_type))
    {
        llvm::errs() << "TargetMachine can't emit a file of this type";
        return {};
    }

    pass.run(*this->module);
    dest.flush();

    return {output_path};
}