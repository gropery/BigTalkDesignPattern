#ifndef OBJECTSTRUCTURE_H
#define OBJECTSTRUCTURE_H
#include <list>
#include "Visitor.h"

using namespace std;

class Objectstructure
{
private:
    list<Element *> _elements;

public:
    void Attach(Element *element)
    {
        _elements.push_back(element);
    }

    void Detach(Element *element)
    {
        _elements.remove(element);
    }

    void Display(Visitor *visitor)
    {
        for(Element *e : _elements)
        {
            e->Accept(visitor);
        }
    }
};

#endif // OBJECTSTRUCTURE_H
