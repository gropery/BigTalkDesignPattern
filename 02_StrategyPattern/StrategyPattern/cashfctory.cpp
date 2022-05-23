#include "cashfctory.h"

CashFctory::CashFctory()
{

}

CashSuper* CashFctory::creatCashAccept(int type)
{
    CashSuper *cs = NULL;
    switch(type)
    {
        case 0:
            cs = new CashNormal();
            break;
        case 1:
            cs = new CashReble(0.8);
            break;
        case 2:
            cs = new CashReturn(300,100);
            break;
    }
    return cs;
}
