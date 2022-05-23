#ifndef PROXY_H
#define PROXY_H
#include "igivegift.h"
#include "pursuit.h"

class Proxy : public IGiveGift
{
public:
    Proxy(SchoolGirl *mm);
    void GiveDolls() override;
    void GiveFlowers() override;
    void GiveChocolate() override;

private:
    Pursuit *_gg;

};

#endif // PROXY_H
