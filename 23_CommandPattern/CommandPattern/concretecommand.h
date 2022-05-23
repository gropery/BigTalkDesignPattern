#ifndef CONCRETECOMMAND_H
#define CONCRETECOMMAND_H

#include "AbstractCommand.h"

//ConcreteCommand

class BakeMuttonCommand : public AbstractCommand
{
public:
    BakeMuttonCommand(Barbecuer *receiver):AbstractCommand(receiver){};

    void ExcuteCommand() override;
};

class BakeChickenCommand : public AbstractCommand
{
public:
    BakeChickenCommand(Barbecuer *receiver):AbstractCommand(receiver){};

    void ExcuteCommand() override;
};

#endif // CONCRETECOMMAND_H
