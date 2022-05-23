#ifndef CONCRETECOMPANY_H
#define CONCRETECOMPANY_H
#include <list>
#include "company.h"

class ConcreteCompany : public Company
{
private:
    list <Company *> _children;

public:
    ConcreteCompany(string name):Company(name){};
    void Add(Company *c) override;
    void Remove(Company *c) override;
    void Display(int depth) override;
    void LineOfDuty() override;
};

#endif // CONCRETECOMPANY_H
