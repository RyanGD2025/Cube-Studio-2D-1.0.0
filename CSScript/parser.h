// CSScript/parser.h
#pragma once
#include <string>
#include "ast.h"

class Parser {
public:
    explicit Parser(const std::string& code);
    ASTProgram* parseProgram();
private:
    std::string code;
};
