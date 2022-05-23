#include "fund.h"

Fund::Fund()
{
    stock1 = new Stock1;
    stock2 = new Stock2;
}

void Fund::BuyFund()
{
    stock1->Buy();
    stock2->Buy();
}

void Fund::SellFund()
{
    stock1->Sell();
    stock2->Sell();
}
