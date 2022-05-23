#ifndef CONCRETECOLLEAGUE_H
#define CONCRETECOLLEAGUE_H
#include <string>
#include <iostream>

#include "Colleague.h"
#include "Mediator.h"

using namespace std;


class ConcreteColleague1 : public Colleague
{
public:
    ConcreteColleague1(Mediator *mediator):Colleague(mediator){};
    void Send(string message);
    void Notify(string message);
};

class ConcreteColleague2 : public Colleague
{
public:
    ConcreteColleague2(Mediator *mediator):Colleague(mediator){};
    void Send(string message);
    void Notify(string message);
};

#endif // CONCRETECOLLEAGUE_H
