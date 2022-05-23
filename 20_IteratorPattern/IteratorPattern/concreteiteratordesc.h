#ifndef CONCRETEITERATORDESC_H
#define CONCRETEITERATORDESC_H

#include "iterator.h"
#include "concreteaggregate.h"

class ConcreteIteratorDesc : public Iterator
{
private:
    ConcreteAggregate *_aggregate;
    int _current=0;

public:
    ConcreteIteratorDesc(ConcreteAggregate *aggregate);
    string First() override;
    string Next() override;
    bool IsDone() override;
    string CurrentItem() override;
};

#endif // CONCRETEITERATORDESC_H
