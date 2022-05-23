#ifndef OPERATIONFACTORY_H
#define OPERATIONFACTORY_H
#include "operation.h"
#include "operationx.h"
#include "ifactory.h"
#include <QString>

class AddFactory : public IFactory
{
public:
    Operation * CreateOperation() override;
};

class SubFactory : public IFactory
{
public:
    Operation * CreateOperation() override;
};

class MulFactory : public IFactory
{
public:
    Operation * CreateOperation() override;
};

class DivFactory : public IFactory
{
public:
    Operation * CreateOperation() override;
};


#endif // OPERATIONFACTORY_H
