#include <iostream>
#include "fund.h"

using namespace std;

int main()
{
    Fund *fund = new Fund();
    fund->BuyFund();
    fund->SellFund();

    return 0;
}
