#ifndef OPERATIONX_H
#define OPERATIONX_H

#include "operation.h"

//--------------------------------------------
class OperationAdd: public Operation
{
public:
    OperationAdd();
    double getResult() override;
};

//--------------------------------------------
class OperationSub: public Operation
{
public:
    OperationSub();
    double getResult() override;
};

//--------------------------------------------
class OperationMul: public Operation
{
public:
    OperationMul();
    double getResult() override;
};

//--------------------------------------------
class OperationDiv: public Operation
{
public:
    OperationDiv();
    double getResult() override;
};



#endif // OPERATIONX_H
