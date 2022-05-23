#include "operationfactory.h"


Operation* AddFactory::CreateOperation()
{
    return new OperationAdd();
}

Operation* SubFactory::CreateOperation()
{
    return new OperationSub();
}

Operation* MulFactory::CreateOperation()
{
    return new OperationMul();
}

Operation* DivFactory::CreateOperation()
{
    return new OperationDiv();
}
