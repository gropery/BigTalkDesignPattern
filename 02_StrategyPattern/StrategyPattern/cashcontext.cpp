#include "cashcontext.h"

CashContext::CashContext(CashSuper *csuper)
{
    _cs = csuper;
}

CashContext::CashContext(int type)
{
    switch(type)
    {
        case 0:
            _cs = new CashNormal();
            break;
        case 1:
            _cs = new CashReble(0.8);
            break;
        case 2:
            _cs = new CashReturn(300,100);
            break;
    }
}

double CashContext::GetResult(double money)
{
    return _cs->acceptCash(money);
}
