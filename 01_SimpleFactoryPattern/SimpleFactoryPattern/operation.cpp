#include "operation.h"

Operation::Operation()
    :_numberA(0)
    ,_numberB(0)
{

}

void Operation::setNumberA(double value)
{
    _numberA = value;
}

double Operation::getNumberA()
{
    return _numberA;
}

void Operation::setNumberB(double value)
{
    _numberB = value;
}

double Operation::getNumberB()
{
    return _numberB;
}

double Operation::getResult()
{
    double result = 0;
    return result;
}
