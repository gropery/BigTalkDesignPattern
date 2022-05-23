#include "concreteobserver.h"

ConcreteObserver::ConcreteObserver(ConcreteSubject *subject, string name)
{
    _subject = subject;
    _name = name;
}

void ConcreteObserver::Update()
{
    _ObserverState = _subject->GetSubjectState();
    cout<<"name is "<<_name<<" state is "<<_ObserverState <<endl;
}
