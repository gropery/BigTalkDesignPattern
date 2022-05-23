#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

#include "builder.h"

//--------------------------------------
class ConcreteBuilder1 : public Builder
{
private:
    Product *_product;

public:
    ConcreteBuilder1();
    void BuildPartA() override;
    void BuildPartB() override;
    Product* GetResult() override;
};

//--------------------------------------
class ConcreteBuilder2 : public Builder
{
private:
    Product *_product;

public:
    ConcreteBuilder2();
    void BuildPartA() override;
    void BuildPartB() override;
    Product* GetResult() override;
};

#endif // CONCRETEBUILDER_H
