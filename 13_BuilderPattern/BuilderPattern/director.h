#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "concretebuilder.h"

class Director
{
public:
    Director();
    void Construct(Builder *builder);
};

#endif // DIRECTOR_H
