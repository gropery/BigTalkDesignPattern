#ifndef TERMINALEXPRESSION_H
#define TERMINALEXPRESSION_H

#include "expression.h"

//----------------------------------------------------
class Note : public Expression
{
public:
    Note();
    void Excute(string key, double value) override;
};

//----------------------------------------------------
class Scale : public Expression
{
public:
    Scale();
    void Excute(string key, double value) override;
};

//----------------------------------------------------
class Speed : public Expression
{
public:
    Speed();
    void Excute(string key, double value) override;
};

#endif // TERMINALEXPRESSION_H
