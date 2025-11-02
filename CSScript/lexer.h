// CSScript/lexer.h
#pragma once
#include <string>

struct Token {
    int type;
    std::string lexeme;
};
class Lexer {
public:
    explicit Lexer(const std::string& src);
    Token next();
private:
    std::string source;
    size_t pos;
};
