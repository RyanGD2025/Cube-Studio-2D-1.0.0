// csscript.h
#pragma once
#include <string>

class CSScript {
public:
    bool initialize();
    void tokenize(const std::string& code);
    void parse(const std::string& code);
};
