#include "finery.h"

Finery::Finery()    //Decorator
{

}

void Finery::Decorate(Person *component)
{
    _component = component;
}

void Finery::Show()
{
    if(_component != NULL)
    {
        _component->Show();
    }
}
