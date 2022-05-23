#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include "Mediator.h"
#include "concretecolleague.h"

class ConcreteMediator : public Mediator
{
private:
    ConcreteColleague1 *_colleague1;
    ConcreteColleague2 *_colleague2;

public:
    ConcreteMediator();
    void SetConcreteColleague1(ConcreteColleague1 *colleague1);
    void SetConcreteColleague2(ConcreteColleague2 *colleague2);
    void Send(string message, Colleague *colleague) override;
};

#endif // CONCRETEMEDIATOR_H
