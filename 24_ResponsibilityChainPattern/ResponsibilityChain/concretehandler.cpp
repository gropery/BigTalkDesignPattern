#include "concretehandler.h"
#include <iostream>

using namespace std;

void ConcreteHandler1::HandlerRequest(int request)
{
    if(request>=0 && request<10)
        cout<<"ConcreteHandler1--"<<request<<endl;
    else if(_successor != NULL)
        _successor->HandlerRequest(request);
}

void ConcreteHandler2::HandlerRequest(int request)
{
    if(request>=10 && request<20)
        cout<<"ConcreteHandler2--"<<request<<endl;
    else if(_successor != NULL)
        _successor->HandlerRequest(request);
}

void ConcreteHandler3::HandlerRequest(int request)
{
    if(request>=20 && request<30)
        cout<<"ConcreteHandler3--"<<request<<endl;
    else if(_successor != NULL)
        _successor->HandlerRequest(request);
    else
        cout<<"cancel"<<endl;
}
