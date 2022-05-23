#ifndef ABSTRACTCOMMAND_H
#define ABSTRACTCOMMAND_H
#include "barbecuer.h"

//interface
class AbstractCommand
{
protected:
    Barbecuer *_receiver;

public:
    AbstractCommand(Barbecuer *receiver)
    {
        _receiver = receiver;
    }

    virtual void ExcuteCommand()=0;
};

#endif // ABSTRACTCOMMAND_H
