#ifndef IFACTORY_H
#define IFACTORY_H
#include "operation.h"

class IFactory
{
public:
    IFactory();
    virtual Operation * CreateOperation()=0;
};

#endif // IFACTORY_H
