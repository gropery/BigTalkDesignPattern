#include "concreteiterator.h"


ConcreteIterator::ConcreteIterator(ConcreteAggregate *aggregate)
{
    _aggregate = aggregate;
}

string ConcreteIterator::First()
{
    return _aggregate->GetItem(0);
}

string ConcreteIterator::Next()
{
    string ret;
    _current++;
    if(_current < _aggregate->GetCount())
    {
        ret = _aggregate->GetItem(_current);
    }
    return ret;
}

bool ConcreteIterator::IsDone()
{
    return (_current >= _aggregate->GetCount()) ? true : false;
}

string ConcreteIterator::CurrentItem()
{
    return _aggregate->GetItem(_current);
}


