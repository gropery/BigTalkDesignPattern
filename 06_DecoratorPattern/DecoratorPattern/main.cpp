#include <iostream>
#include "ConcreteDecorator.h"

using namespace std;

int main()
{
    Person *p = new Person("cai");

    cout << "1st decorator"<<endl;

    TShirsts *tshirt = new TShirsts();
    BigTrouser *bigtrouser = new BigTrouser();

    tshirt->Decorate(p);  //set component
    bigtrouser->Decorate(tshirt);
    bigtrouser->Show();

    return 0;
}
