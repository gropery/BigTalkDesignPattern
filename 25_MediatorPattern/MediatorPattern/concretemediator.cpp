#include "concretemediator.h"

ConcreteMediator::ConcreteMediator()
{

}

void ConcreteMediator::SetConcreteColleague1(ConcreteColleague1 *colleague1)
{
    _colleague1 = colleague1;
}

void ConcreteMediator::SetConcreteColleague2(ConcreteColleague2 *colleague2)
{
    _colleague2 = colleague2;
}

void ConcreteMediator::Send(string message, Colleague *colleague)
{
    if(colleague == _colleague1)
    {
        _colleague1->Notify(message);
    }else if(colleague == _colleague2)
    {
        _colleague2->Notify(message);
    }
}
