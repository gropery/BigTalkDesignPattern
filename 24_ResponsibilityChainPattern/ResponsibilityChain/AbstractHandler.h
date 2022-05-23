#ifndef ABSTRACTHANDLER_H
#define ABSTRACTHANDLER_H

class AbstractHandler
{
protected:
    AbstractHandler *_successor;

public:
    void SetSuccessor(AbstractHandler *successor)
    {
        _successor = successor;
    }

    virtual void HandlerRequest(int request)=0;
};

#endif // ABSTRACTHANDLER_H
