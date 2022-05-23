#ifndef CONCRETEFACTORY_H
#define CONCRETEFACTORY_H

#include "ifactory.h"
#include "concreteuser.h"
#include "concretedepartment.h"

class SqlServerFactory : public IFactory
{
public:
    SqlServerFactory();
    IUser *CreateUser() override;
    IDepartment *CreateDepartment() override;
};

class AccessFactory : public IFactory
{
public:
    AccessFactory();
    IUser *CreateUser() override;
    IDepartment *CreateDepartment() override;
};

#endif // CONCRETEFACTORY_H
