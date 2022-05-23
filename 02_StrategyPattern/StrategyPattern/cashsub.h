#ifndef CASHSUB_H
#define CASHSUB_H
#include "cashsuper.h"

//----------------------------------
class CashNormal: public CashSuper
{
public:
    CashNormal();
    double acceptCash(double money) override;
};

//----------------------------------
class CashReble: public CashSuper
{
private:
    double _moneyRebate = 1;

public:
    CashReble(double moneyRebate);
    double acceptCash(double money) override;
};

//----------------------------------
class CashReturn: public CashSuper
{
private:
    double _moneyCondition = 0;
    double _moneyReturn = 0;

public:
    CashReturn(double moneyCondition, double moneyReturn);
    double acceptCash(double money) override;
};

#endif // CASHSUB_H
