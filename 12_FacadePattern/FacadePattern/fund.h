#ifndef FUND_H
#define FUND_H
#include "subsystem.h"

class Fund
{
public:
    Fund();
    Stock1 *stock1;
    Stock2 *stock2;

    void BuyFund();
    void SellFund();
};

#endif // FUND_H
