#include "operationfactory.h"

OperationFactory::OperationFactory()
{

}

Operation* OperationFactory::createOperate(QString operate)
{
    Operation *oper = NULL;
    if(operate == "+")
        oper = new OperationAdd();
    else if(operate == "-")
        oper = new OperationSub();
    else if(operate == "*")
        oper = new OperationMul();
    else if(operate == "/")
        oper = new OperationDiv();

    return oper;
}
