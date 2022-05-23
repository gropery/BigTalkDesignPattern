#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <list>

class Composite : public Component
{
private:
    list<Component *> _children;

public:
    Composite(string name):Component(name){};
    void Add(Component *c) override;
    void Remove(Component *c) override;
    void Display(int depth) override;
};

#endif // COMPOSITE_H
