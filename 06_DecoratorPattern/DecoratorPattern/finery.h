#ifndef FINERY_H
#define FINERY_H
#include "person.h"

class Finery : public Person
{
protected:
    Person *_component;

public:
    Finery();
    void Decorate(Person *component);
    void Show() override;
};

#endif // FINERY_H
