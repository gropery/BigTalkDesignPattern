#include "person.h"

Person::Person()
{
}

Person::Person(string name)       //ConcreteComponent
{
    _name = name;
}

void Person::Show()
{
    cout << "Person is " << _name << endl;
}

