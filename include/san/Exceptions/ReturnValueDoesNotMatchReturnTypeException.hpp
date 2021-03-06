#pragma once

#include <san/Exceptions/CompilationException.hpp>
#include <san/Type.hpp>

namespace San
{
class ReturnValueDoesNotMatchReturnTypeException : public CompilationException
{
public:
    ReturnValueDoesNotMatchReturnTypeException(const fs::path &source, antlr4::Token *token, const Type *given, const Type* expected) : CompilationException(source, "Returned value's type '" + given->to_string() + "' doesn't match function's return type '" + expected->to_string() + "'", token) {}
};
} // namespace San
