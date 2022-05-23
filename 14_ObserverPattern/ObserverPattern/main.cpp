#include <iostream>
#include "concretesubject.h"
#include "concreteobserver.h"
using namespace std;

int main()
{
    ConcreteSubject *s = new ConcreteSubject();

    s->Attach(new ConcreteObserver(s, "x"));
    s->Attach(new ConcreteObserver(s, "y"));
    s->Attach(new ConcreteObserver(s, "z"));

    s->SetSubjectState("ABC");
    s-> Notify();

    return 0;
}
