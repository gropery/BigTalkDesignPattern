#include "concreteaggregate.h"
#include "concreteiterator.h"

ConcreteAggregate::ConcreteAggregate()
{

}

Iterator *ConcreteAggregate::CreateIterator()
{
    return new ConcreteIterator(this);
}

int ConcreteAggregate::GetCount()
{
    return _items.size();
}

void ConcreteAggregate::SetItem(string item)
{
    _items.push_back(item);
}

string ConcreteAggregate::GetItem(int i)
{
    //auto it = _items.begin();
    list<string>::iterator it = _items.begin();

    for(int k=0; k<i; k++)
        it++;

    return it->data();
}
