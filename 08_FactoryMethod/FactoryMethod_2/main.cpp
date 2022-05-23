#include <iostream>
#include "ifactorysub.h"
#include "leifengsub.h"
using namespace std;

int main()
{
    IFactory * undergraduatefactory = new UndergraduateFactory();
    LeiFeng *undergraduate = undergraduatefactory->CreateLeiFeng();
    undergraduate->Sweep();
    undergraduate->Wash();
    undergraduate->BuyRice();

    IFactory * volunteerfactory = new VolunteerFactory();
    LeiFeng *volunteer = volunteerfactory->CreateLeiFeng();
    volunteer->Sweep();
    volunteer->Wash();
    volunteer->BuyRice();

    return 0;
}
