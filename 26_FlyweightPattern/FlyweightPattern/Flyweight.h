#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H
#include <iostream>

using namespace std;

class Flyweight
{
public:
    virtual void Operation(int extrinsicstate)=0;
};

class ConcreteFlyweight : public Flyweight
{
public:
    void Operation(int extrinsicstate) override
    {
        cout<<"ConcreteFlyweight: "<<extrinsicstate<<endl;
    }
};

class UnsharedConcreteFlyweight : public Flyweight
{
public:
    void Operation(int extrinsicstate) override
    {
        cout<<"UnsharedConcreteFlyweight: "<<extrinsicstate<<endl;
    }
};

#endif // FLYWEIGHT_H
