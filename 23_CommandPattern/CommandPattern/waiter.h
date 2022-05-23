#ifndef WAITER_H
#define WAITER_H
#include "AbstractCommand.h"
#include <list>

//Invoker
class Waiter
{
private:
    list<AbstractCommand *> _command;

public:
    Waiter();
    void SetOrder(AbstractCommand *command);
    void CancelOrder(AbstractCommand *command);
    void Notify();

};

#endif // WAITER_H
