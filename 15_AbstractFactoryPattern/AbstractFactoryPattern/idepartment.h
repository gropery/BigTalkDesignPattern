#ifndef IDEPARTMENT_H
#define IDEPARTMENT_H
#include "department.h"

class IDepartment
{
public:
    IDepartment();
    virtual void Insert(Department *department)=0;
    virtual Department * GetDepartment(int id)=0;
};

#endif // IDEPARTMENT_H
