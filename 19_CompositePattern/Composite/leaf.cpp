#include "leaf.h"

void Leaf::Add(Component *c)
{
    (void) c;
    cout<<"cannot add to a leaf"<<endl;
}

void Leaf::Remove(Component *c)
{
    (void) c;
    cout<<"cannot remove from a leaf"<<endl;
}

void Leaf::Display(int depth)
{
    cout<<string(depth, '-')<<_name<<endl;
}
