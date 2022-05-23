#ifndef CONCRETEDEPARTMENT_H
#define CONCRETEDEPARTMENT_H

#include "company.h"

//----------------------------------------
class HRDepartment : public Company
{
public:
    HRDepartment(string name):Company(name){};
    void Add(Company *c) override;
    void Remove(Company *c) override;
    void Display(int depth) override;
    void LineOfDuty() override;
};

//----------------------------------------
class FinanceDepartment : public Company
{
public:
    FinanceDepartment(string name):Company(name){};
    void Add(Company *c) override;
    void Remove(Company *c) override;
    void Display(int depth) override;
    void LineOfDuty() override;
};

#endif // CONCRETEDEPARTMENT_H
