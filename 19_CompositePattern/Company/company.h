#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <iostream>

using namespace std;

class Company
{
protected:
    string _name;
public:
    Company(string name);
    virtual void Add(Company *c)=0;
    virtual void Remove(Company *c)=0;
    virtual void Display(int depth)=0;
    virtual void LineOfDuty()=0;
};

#endif // COMPANY_H
