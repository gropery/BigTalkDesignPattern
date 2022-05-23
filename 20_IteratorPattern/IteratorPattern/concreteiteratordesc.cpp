#include "concreteiteratordesc.h"

ConcreteIteratorDesc::ConcreteIteratorDesc(ConcreteAggregate *aggregate)
{
    _aggregate = aggregate;
    _current = aggregate->GetCount()-1;
}

string ConcreteIteratorDesc::First()
{
    return _aggregate->GetItem(_aggregate->GetCount()-1);
}

string ConcreteIteratorDesc::Next()
{
    string ret;
    _current--;
    if(_current > 0)
    {
        ret = _aggregate->GetItem(_current);
    }
    return ret;
}

bool ConcreteIteratorDesc::IsDone()
{
    return (_current < 0) ? true : false;
}

string ConcreteIteratorDesc::CurrentItem()
{
    return _aggregate->GetItem(_current);
}
