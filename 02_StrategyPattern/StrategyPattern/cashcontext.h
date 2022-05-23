#ifndef CASHCONTEXT_H
#define CASHCONTEXT_H
#include "cashsuper.h"
#include "cashsub.h"
#include "mainwindow.h"

class CashContext
{
private:
    CashSuper *_cs;

public:
    CashContext(CashSuper *csuper);
    CashContext(int type);

    double GetResult(double money);
};

#endif // CASHCONTEXT_H
