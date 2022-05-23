#ifndef EXPRESSION_H
#define EXPRESSION_H
#include "PlayContext.h"

class Expression
{
public:
    Expression();
    void Interpret(PlayContext *context);
    virtual void Excute(string key, double value)=0;
};

#endif // EXPRESSION_H
