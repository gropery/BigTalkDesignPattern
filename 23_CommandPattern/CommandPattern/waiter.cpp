#include "waiter.h"

Waiter::Waiter()
{
}

void Waiter::SetOrder(AbstractCommand *command)
{
    _command.push_back(command);
}

void Waiter::CancelOrder(AbstractCommand *command)
{
   _command.remove(command);
}

void Waiter::Notify()
{
    for(auto it: _command)
        it->ExcuteCommand();
}
