#include "concretemanager.h"

void ConcreteManager::RequestApplications(Request *request)
{
    if(request->GetRequestType()=="leave" && request->GetRequestNumber()<2)
    {
        cout << "ConcreteManager ok "
             << request->GetRequestType()
             << request->GetRequestContent()
             << request->GetRequestNumber()
             << endl;
    }else if(_superior != NULL)
    {
        _superior->RequestApplications(request);
    }
}

void Majordomo::RequestApplications(Request *request)
{
    if(request->GetRequestType()=="leave" && request->GetRequestNumber()<5)
    {
        cout << "Majordomo ok "
             << request->GetRequestType()
             << request->GetRequestContent()
             << request->GetRequestNumber()
             << endl;
    }else if(_superior != NULL)
    {
        _superior->RequestApplications(request);
    }
}

void GeneralManager::RequestApplications(Request *request)
{
    if(request->GetRequestType()=="leave")
    {
        cout << "GeneralManager ok "
             << request->GetRequestType()
             << request->GetRequestContent()
             << request->GetRequestNumber()
             << endl;
    }else if(request->GetRequestType()=="raise" && request->GetRequestNumber()<=500)
    {
        cout << "ConcreteManager ok "
             << request->GetRequestType()
             << request->GetRequestContent()
             << request->GetRequestNumber()
             << endl;
    }else if(request->GetRequestType()=="raise" && request->GetRequestNumber()>500)
    {
        cout << "ConcreteManager not ok "
             << request->GetRequestType()
             << request->GetRequestContent()
             << request->GetRequestNumber()
             << endl;
    }
}
