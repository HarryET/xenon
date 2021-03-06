#pragma once

#include <san/Exceptions/CompilationException.hpp>
#include <san/Type.hpp>

namespace San
{
class IndexException : public CompilationException
{
public:
    IndexException(const fs::path &source, antlr4::Token *token, Type *index_type, Type *type) : CompilationException(source, "Invalid index of type '" + index_type->to_string() + "' on type: '" + type->to_string() + "'", token) {}
};
} // namespace San
