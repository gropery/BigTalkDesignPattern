#include <iostream>
#include "concreteaggregate.h"
#include "concreteiterator.h"
#include "concreteiteratordesc.h"

using namespace std;

int main()
{
    ConcreteAggregate *a = new ConcreteAggregate();

    a->SetItem("First");
    a->SetItem("Seconed");
    a->SetItem("Third");


    Iterator *i = a->CreateIterator();
    //Iterator *i = new ConcreteIteratorDesc(a);

    while(!i->IsDone())
    {
        cout<<i->CurrentItem()<<" buy tickt"<<endl;
        i->Next();
    }

    return 0;
}
