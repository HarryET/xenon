#pragma once

#include <san/Values/Constant.hpp>
#include <san/Values/Variable.hpp>

#include <llvm/IR/IRBuilder.h>

namespace San::Values
{
class GlobalVariable : public Variable
{
public:
    GlobalVariable(const std::string &name, Type *type, llvm::Value *ref) : Variable(name, type, ref) {}

    static GlobalVariable *create(const std::string &name, std::unique_ptr<llvm::Module> &module, Type *type, Constant *value = nullptr, const llvm::GlobalValue::LinkageTypes &linkage = llvm::GlobalValue::LinkageTypes::PrivateLinkage)
    {
        auto global = new llvm::GlobalVariable(*module, type->get_ref(), false, linkage, value ? value->get_ref() : type->default_value(), name);
        return new GlobalVariable(name, type, global);
    }

    llvm::GlobalVariable *get_ref() const override
    {
        return llvm::cast<llvm::GlobalVariable>(this->ref);
    }
};
} // namespace San::Values
