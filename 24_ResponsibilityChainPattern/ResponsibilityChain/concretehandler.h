#ifndef CONCRETEHANDLER_H
#define CONCRETEHANDLER_H

#include "AbstractHandler.h"

class ConcreteHandler1 : public AbstractHandler
{
public:
    void HandlerRequest(int request) override;
};

class ConcreteHandler2 : public AbstractHandler
{
public:
    void HandlerRequest(int request) override;
};


class ConcreteHandler3 : public AbstractHandler
{
public:
    void HandlerRequest(int request) override;
};


#endif // CONCRETEHANDLER_H
