#ifndef MEDIATOR_H
#define MEDIATOR_H
#include <string>

using namespace std;

class Colleague;

//-----------------------------------
class Mediator
{
public:
    virtual void Send(string message, Colleague *colleague)=0;
};

#endif // MEDIATOR_H
