#pragma once

#include <san/Value.hpp>

#include <string>

namespace San
{
enum class AssemblyConstraintModifier
{
    None,

    WriteOnly,
    ReadWrite,
};

struct AssemblyOperand
{
    AssemblyConstraintModifier type = AssemblyConstraintModifier::None;
    bool is_earlyclobber = false;
    std::string name;

    Value *expression;

    AssemblyOperand(const AssemblyConstraintModifier &type_, const std::string &name_, Value *expression_) : type(type_), name(name_), expression(expression_) {}
};
} // namespace San
