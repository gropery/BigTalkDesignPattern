#include "pursuit.h"
#include <iostream>
using namespace std;

Pursuit::Pursuit(SchoolGirl *mm)
{
    _mm = mm;
}

void Pursuit::GiveDolls()
{
    cout << _mm->GetName() << " get Dolls" <<endl;
}

void Pursuit::GiveFlowers()
{
    cout << _mm->GetName() << " get Flowers" <<endl;
}

void Pursuit::GiveChocolate()
{
    cout << _mm->GetName() << " get Chocolate" <<endl;
}
