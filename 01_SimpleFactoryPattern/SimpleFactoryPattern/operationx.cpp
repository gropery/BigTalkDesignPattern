#include "operationx.h"
#include <QDebug>

//--------------------------------------------
OperationAdd::OperationAdd()
{
    qDebug() << "Created add operation...";
}

double OperationAdd::getResult()
{
    double result = 0;
    result = _numberA + _numberB;
    return result;
}

//--------------------------------------------
OperationSub::OperationSub()
{
    qDebug() << "Created sub operation...";
}

double OperationSub::getResult()
{
    double result = 0;
    result = _numberA - _numberB;
    return result;
}

//--------------------------------------------
OperationMul::OperationMul()
{
    qDebug() << "Created mul operation...";
}

double OperationMul::getResult()
{
    double result = 0;
    result = _numberA * _numberB;
    return result;
}

//--------------------------------------------
OperationDiv::OperationDiv()
{
    qDebug() << "Created div operation...";
}

double OperationDiv::getResult()
{
    double result = 0;
    if(_numberB==0)
    {
        qDebug() << "Created div operation...";
        return 0;
    }
    result = _numberA / _numberB;
    return result;
}



