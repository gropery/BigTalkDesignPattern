#include <iostream>
#include "concretehandler.h"
using namespace std;

int main()
{
    AbstractHandler *h1 = new ConcreteHandler1();
    AbstractHandler *h2 = new ConcreteHandler2();
    AbstractHandler *h3 = new ConcreteHandler3();
    h1->SetSuccessor(h2);
    h2->SetSuccessor(h3);

    int requests[] = {2,5,14,22,18,3,27,20};

    for(int request : requests)
        h1->HandlerRequest(request);

    return 0;
}
