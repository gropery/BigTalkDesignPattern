#include <iostream>
#include "concretedepartment.h"
#include "concretecompany.h"

using namespace std;

int main()
{
    Company *root = new ConcreteCompany("Root Company");
    root->Add(new HRDepartment("Root HRDepartment "));
    root->Add(new FinanceDepartment("Root FinanceDepartment "));

    Company *comp1 = new ConcreteCompany("comp1");
    comp1->Add(new HRDepartment("comp1 HRDepartment "));
    comp1->Add(new FinanceDepartment("comp1 FinanceDepartment "));
    root->Add(comp1);

    Company *comp1_1 = new ConcreteCompany("comp1_1");
    comp1_1->Add(new HRDepartment("comp1_1 HRDepartment "));
    comp1_1->Add(new FinanceDepartment("comp1_1 FinanceDepartment "));
    comp1->Add(comp1_1);

    Company *comp1_2 = new ConcreteCompany("comp1_2");
    comp1_2->Add(new HRDepartment("comp1_2 HRDepartment "));
    comp1_2->Add(new FinanceDepartment("comp11 FinanceDepartment "));
    comp1->Add(comp1_2);

    cout<<"-----------Structure---------------"<<endl;
    root->Display(1);
    cout<<"-----------LineOFDuty--------------"<<endl;
    root->LineOfDuty();

    return 0;
}
