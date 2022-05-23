#ifndef CONCRETEITERATOR_H
#define CONCRETEITERATOR_H

#include "iterator.h"
#include "concreteaggregate.h"

class ConcreteIterator : public Iterator
{
private:
    ConcreteAggregate *_aggregate;
    int _current=0;

public:
    ConcreteIterator(ConcreteAggregate *aggregate);
    string First() override;
    string Next() override;
    bool IsDone() override;
    string CurrentItem() override;
};

#endif // CONCRETEITERATOR_H
