#ifndef AGGREGATE_H
#define AGGREGATE_H
#include "iterator.h"

class Aggregate
{
public:
    Aggregate();
    virtual Iterator * CreateIterator()=0;
};

#endif // AGGREGATE_H
