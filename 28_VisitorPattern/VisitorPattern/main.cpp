#include <iostream>
#include "visitor.h"
#include "ObjectStructure.h"

int main() {
    Objectstructure *o = new Objectstructure();
    o->Attach(new Man());
    o->Attach(new Woman());

    Success *v1 = new Success();
    o->Display(v1);

    Failing *v2 = new Failing();
    o->Display(v2);

    Amativeness *v3 = new Amativeness();
    o->Display(v3);

    delete v1;
    delete v2;
    delete v3;

    return 0;
}
