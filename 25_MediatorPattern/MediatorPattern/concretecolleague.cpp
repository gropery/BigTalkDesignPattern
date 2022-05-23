#include "concretecolleague.h"

void ConcreteColleague1::Send(string message)
{
    _mediator->Send(message,this);
}

void ConcreteColleague1::Notify(string message)
{
    cout <<"ConcreteColleague1---"<<message<<endl;
}

void ConcreteColleague2::Send(string message)
{
    _mediator->Send(message,this);
}

void ConcreteColleague2::Notify(string message)
{
    cout <<"ConcreteColleague2---"<<message<<endl;
}
