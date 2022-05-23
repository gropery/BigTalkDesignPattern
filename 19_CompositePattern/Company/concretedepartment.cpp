#include "concretedepartment.h"

//----------------------------------------
void HRDepartment::Add(Company *c)
{ (void)(c); }

void HRDepartment::Remove(Company *c)
{ (void)(c); }

void HRDepartment::Display(int depth)
{
    cout<<string(depth, '-')+_name<<endl;
}

void HRDepartment::LineOfDuty()
{
    cout<<_name + "HR"<<endl;
}

//----------------------------------------
void FinanceDepartment::Add(Company *c)
{ (void)(c); }

void FinanceDepartment::Remove(Company *c)
{ (void)(c); }

void FinanceDepartment::Display(int depth)
{
    cout<<string(depth, '-')+_name<<endl;
}

void FinanceDepartment::LineOfDuty()
{
    cout<<_name + "Finance"<<endl;
}
