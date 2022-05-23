#ifndef BUILDER_H
#define BUILDER_H
#include "product.h"

class Builder
{
public:
    Builder();
    virtual void BuildPartA()=0;
    virtual void BuildPartB()=0;
    virtual Product* GetResult()=0;
};

#endif // BUILDER_H
