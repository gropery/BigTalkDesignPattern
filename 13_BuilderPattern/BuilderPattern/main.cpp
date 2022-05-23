#include <iostream>
#include "director.h"
#include "concretebuilder.h"

using namespace std;

int main()
{
    Director *director = new Director();

    Builder *b1 = new ConcreteBuilder1();
    director->Construct(b1);
    Product *p1 = b1->GetResult();
    p1->Show();

    Builder *b2 = new ConcreteBuilder2();
    director->Construct(b2);
    Product *p2 = b2->GetResult();
    p2->Show();

    return 0;
}
