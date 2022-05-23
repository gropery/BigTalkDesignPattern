#include "subject.h"

Subject::Subject()
{

}

void Subject::Attach(Observer *observer)
{
    _observer.push_back(observer);
}

void Subject::Detach(Observer *observer)
{
    _observer.remove(observer);
}

void Subject::Notify()
{
    for(Observer *o : _observer)
    {
        o->Update();
    }
}
