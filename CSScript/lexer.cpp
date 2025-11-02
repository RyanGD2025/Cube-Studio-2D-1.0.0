// CSScript/lexer.cpp
#include "lexer.h"

Lexer::Lexer(const std::string& src) : source(src), pos(0) {}

Token Lexer::next() {
    // esqueleto: retornar fim
    return Token{-1, ""};
}
