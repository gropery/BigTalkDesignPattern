#include "ConcreteDecorator.h"

//---------------------------------
TShirsts::TShirsts()
{
}

void TShirsts::Show()
{
    Finery::Show();         //执行上一对象链
    cout << "TShirsts" <<endl;
}

//---------------------------------
BigTrouser::BigTrouser()
{
}

void BigTrouser::Show()
{
    Finery::Show();        //执行上一对象链
    cout << "BigTrouser" <<endl;
}
