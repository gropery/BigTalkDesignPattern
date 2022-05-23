#include "composite.h"

void Composite::Add(Component *c)
{
    _children.push_back(c);
}

void Composite::Remove(Component *c)
{
    _children.remove(c);
}

void Composite::Display(int depth)
{
    cout<<(string(depth, '-') + _name)<<endl;

    for(Component *component : _children)
    {
        component->Display(depth+2);
    }
}
