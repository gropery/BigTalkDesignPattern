#include <iostream>
#include "proxy.h"


using namespace std;

int main()
{
    SchoolGirl *jiaojiao = new SchoolGirl();
    jiaojiao->SetName("jiao");

    Proxy *proxy = new Proxy(jiaojiao);
    proxy->GiveDolls();
    proxy->GiveFlowers();
    proxy->GiveChocolate();

    return 0;
}
