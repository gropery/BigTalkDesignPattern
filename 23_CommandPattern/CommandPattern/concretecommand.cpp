#include "concretecommand.h"

void BakeMuttonCommand::ExcuteCommand()
{
    _receiver->BakeMutton();
}

void BakeChickenCommand::ExcuteCommand()
{
    _receiver->BakeChickenWing();
}
