#include <iostream>
#include "Visitor.h"
#include "ObjectStructure.h"

using namespace std;

int main()
{
    Objectstructure *o = new Objectstructure();
    o->Attach(new ConcreteElementA());
    o->Attach(new ConcreteElementB());

    ConcreteVisitor1 *v1 = new ConcreteVisitor1();
    o->Display(v1);

    ConcreteVisitor2 *v2 = new ConcreteVisitor2();
    o->Display(v2);

    delete v1;
    delete v2;

    return 0;
}
