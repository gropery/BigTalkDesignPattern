#include "concretecompany.h"

void ConcreteCompany::Add(Company *c)
{
    _children.push_back(c);
}

void ConcreteCompany::Remove(Company *c)
{
    _children.remove(c);
}

void ConcreteCompany::Display(int depth)
{
    cout<<string(depth, '-')+_name<<endl;
    for(Company *component : _children)
    {
        component->Display(depth + 2);
    }
}

void ConcreteCompany::LineOfDuty()
{
    for(Company *component : _children)
    {
        component->LineOfDuty();
    }
}
