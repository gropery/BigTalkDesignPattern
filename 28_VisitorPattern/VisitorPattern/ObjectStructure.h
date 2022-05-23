#ifndef OBJECTSTRUCTURE_H
#define OBJECTSTRUCTURE_H
#include <list>
#include "visitor.h"

using namespace std;

class Objectstructure
{
private:
    list<Person *> _elements;

public:
    void Attach(Person *element)
    {
        _elements.push_back(element);
    }

    void Detach(Person *element)
    {
        _elements.remove(element);
    }

    void Display(Action *visitor)
    {
        for(Person *e : _elements)
        {
            e->Accept(visitor);
        }
    }
};

#endif // OBJECTSTRUCTURE_H
