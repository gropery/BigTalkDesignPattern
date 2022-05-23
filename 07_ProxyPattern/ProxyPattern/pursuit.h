#ifndef PURSUIT_H
#define PURSUIT_H
#include "schoolgirl.h"
#include "igivegift.h"

class Pursuit : public IGiveGift
{
public:
    Pursuit(SchoolGirl *mm);
    void GiveDolls() override;
    void GiveFlowers() override;
    void GiveChocolate() override;

private:
    SchoolGirl *_mm;
};

#endif // PURSUIT_H
