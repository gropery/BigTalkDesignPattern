#ifndef LEAF_H
#define LEAF_H

#include "component.h"

class Leaf : public Component
{
public:
    Leaf(string name):Component(name){};
    void Add(Component *c) override;
    void Remove(Component *c) override;
    void Display(int depth) override;
};

#endif // LEAF_H
