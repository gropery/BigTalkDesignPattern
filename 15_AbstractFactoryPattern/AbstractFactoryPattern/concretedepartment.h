#ifndef CONCRETEDEPARTMENT_H
#define CONCRETEDEPARTMENT_H
#include <string>
#include <iostream>
#include "idepartment.h"
using namespace  std;

class SqlserverDepartment : public IDepartment
{
public:
    SqlserverDepartment();
    void Insert(Department *department) override;
    Department * GetDepartment(int id) override;
};

class AccessDepartment : public IDepartment
{
public:
    AccessDepartment();
    void Insert(Department *department) override;
    Department * GetDepartment(int id) override;
};

#endif // CONCRETEDEPARTMENT_H
