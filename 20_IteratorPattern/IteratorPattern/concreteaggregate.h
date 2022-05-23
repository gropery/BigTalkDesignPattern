#ifndef CONCRETEAGGREGATE_H
#define CONCRETEAGGREGATE_H
#include <list>
#include "aggregate.h"

class ConcreteAggregate : public Aggregate
{
private:
    list<string> _items;

public:
    ConcreteAggregate();
    Iterator *CreateIterator() override;
    int GetCount();
    void SetItem(string item);
    string GetItem(int i);
};

#endif // CONCRETEAGGREGATE_H
