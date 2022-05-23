#ifndef COLLEAGUE_H
#define COLLEAGUE_H

class Mediator;

//-----------------------------------
class Colleague
{
protected:
    Mediator *_mediator;

public:
    Colleague(Mediator *mediator)
    {
        _mediator = mediator;
    }
};

#endif // COLLEAGUE_H
