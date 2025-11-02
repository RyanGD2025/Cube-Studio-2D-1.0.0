// CSScript/ast.h
#pragma once

struct ASTNode {
    virtual ~ASTNode() = default;
};

struct ASTProgram : public ASTNode {
    // children: list<ASTNode*>
};
