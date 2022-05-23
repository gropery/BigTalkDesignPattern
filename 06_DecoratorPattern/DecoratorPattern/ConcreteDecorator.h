#ifndef CONCRETEDECORATOR_H
#define CONCRETEDECORATOR_H
#include "finery.h"

//---------------------------------
class TShirsts : public Finery
{
public:
    TShirsts();
    void Show() override;
};

//---------------------------------
class BigTrouser : public Finery
{
public:
    BigTrouser();
    void Show() override;
};

#endif // CONCRETEDECORATOR_H
