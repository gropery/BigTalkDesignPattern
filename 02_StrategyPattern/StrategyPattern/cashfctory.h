#ifndef CASHFCTORY_H
#define CASHFCTORY_H
#include "cashsuper.h"
#include "cashsub.h"
#include <QString>

class CashFctory
{
public:
    CashFctory();
    static CashSuper* creatCashAccept(int type);

};

#endif // CASHFCTORY_H
