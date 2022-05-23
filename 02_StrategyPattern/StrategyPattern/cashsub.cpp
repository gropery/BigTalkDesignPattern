#include "cashsub.h"

//----------------------------------
CashNormal::CashNormal()
{

}

double CashNormal::acceptCash(double money)
{
    return money;
}

//----------------------------------
CashReble::CashReble(double moneyReble)
{
    _moneyRebate = moneyReble;
}

double CashReble::acceptCash(double money)
{
    return money*_moneyRebate;
}

//----------------------------------
CashReturn::CashReturn(double moneyCondition, double moneyReturn)
{
    _moneyCondition = moneyCondition;
    _moneyReturn = moneyReturn;
}

double CashReturn::acceptCash(double money)
{
    double result = money;
    if(money>=_moneyCondition)
        result = money - money/_moneyCondition*_moneyReturn;

    return result;
}

