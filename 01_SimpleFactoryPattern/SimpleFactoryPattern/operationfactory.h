#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H
#include "operation.h"
#include "operationx.h"
#include <QString>

class OperationFactory
{
public:
    OperationFactory();
    static Operation* createOperate(QString operate);

};

#endif // OPERATIONFACTORY_H
