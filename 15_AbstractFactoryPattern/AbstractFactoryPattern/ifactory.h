#ifndef IFACTORY_H
#define IFACTORY_H

#include "iuser.h"
#include "idepartment.h"

class IFactory
{
public:
    IFactory();
    virtual IUser *CreateUser()=0;
    virtual IDepartment *CreateDepartment()=0;
};

#endif // IFACTORY_H
