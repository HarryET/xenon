#pragma once

#include <san/Exceptions/CompilationException.hpp>

namespace San
{
class FileNotFoundException : public std::exception
{
    using std::exception::exception;
};

class ImportException : public CompilationException
{
public:
    ImportException(const fs::path &source, antlr4::Token *token) : ImportException(source, token, token->getText()) {}
    ImportException(const fs::path &source, antlr4::Token *token, const std::string &text) : CompilationException(source, "Import failed: " + text, token) {}
};
} // namespace San
