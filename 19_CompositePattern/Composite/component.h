#ifndef COMPONENT_H
#define COMPONENT_H
#include <string>
#include <iostream>

using namespace std;

class Component
{
protected:
    string _name;

public:
    Component(string name);
    virtual void Add(Component *c)=0;
    virtual void Remove(Component *c)=0;
    virtual void Display(int depth)=0;
};

#endif // COMPONENT_H
