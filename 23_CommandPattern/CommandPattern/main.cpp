#include <iostream>
#include "waiter.h"
#include "concretecommand.h"

using namespace std;

//client
int main()
{
    //开店前的准备
    Barbecuer *boy = new Barbecuer();
    AbstractCommand *bakeMuttonCommand1 = new BakeMuttonCommand(boy);
    AbstractCommand *bakeMuttonCommand2 = new BakeMuttonCommand(boy);
    AbstractCommand *bakechikencommand = new BakeChickenCommand(boy);
    Waiter *girl = new Waiter();

    //开门营业 顾客点菜
    girl->SetOrder(bakeMuttonCommand1);
    girl->SetOrder(bakeMuttonCommand2);
    girl->SetOrder(bakechikencommand);

    //点菜完毕 通知厨房
    girl->Notify();

    return 0;
}
