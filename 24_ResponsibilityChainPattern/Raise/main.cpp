#include <iostream>
#include "concretemanager.h"
#include "request.h"

using namespace std;

int main()
{
    Manager * jinli = new ConcreteManager("jinli");
    Majordomo *zongjian = new Majordomo("zongjian");
    GeneralManager *zongjingli = new GeneralManager("zongjingli");
    jinli->SetSuperior(zongjian);
    zongjian->SetSuperior(zongjingli);

    Request *request = new Request();
    request->SetRequestType("leave");
    request->SetRequestContent(" xiaocai ");
    request->SetRequestNumber(1);
    jinli->RequestApplications(request);

    Request *request2 = new Request();
    request2->SetRequestType("leave");
    request2->SetRequestContent(" xiaocai ");
    request2->SetRequestNumber(4);
    jinli->RequestApplications(request2);

    Request *request3 = new Request();
    request3->SetRequestType("raise");
    request3->SetRequestContent(" xiaocai ");
    request3->SetRequestNumber(500);
    jinli->RequestApplications(request3);

    Request *request4 = new Request();
    request4->SetRequestType("raise");
    request4->SetRequestContent(" xiaocai ");
    request4->SetRequestNumber(1000);
    jinli->RequestApplications(request4);

    return 0;
}
