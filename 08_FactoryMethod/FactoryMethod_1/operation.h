#ifndef OPERATION_H
#define OPERATION_H


class Operation
{
protected:
    double _numberA = 0;
    double _numberB = 0;

public:
    Operation();

    void setNumberA(double value);
    double getNumberA();

    void setNumberB(double value);
    double getNumberB();

    virtual double getResult();
};

#endif // OPERATION_H
