#include "proxy.h"


Proxy::Proxy(SchoolGirl *mm)
{
    _gg = new Pursuit(mm);
}

void Proxy::GiveDolls()
{
    _gg->GiveDolls();
}

void Proxy::GiveFlowers()
{
    _gg->GiveFlowers();
}

void Proxy::GiveChocolate()
{
    _gg->GiveChocolate();
}
