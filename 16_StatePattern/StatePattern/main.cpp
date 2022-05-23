#include <iostream>

#include "work.h"

using namespace std;

int main()
{
    Work *emergency = new Work();
    emergency->SetHour(9);
    emergency->WriteProgram();
    emergency->SetHour(10);
    emergency->WriteProgram();
    emergency->SetHour(12);
    emergency->WriteProgram();
    emergency->SetHour(13);
    emergency->WriteProgram();
    emergency->SetHour(14);
    emergency->WriteProgram();

    emergency->SetHour(17);
    //emergency->SetFinish(true);
    emergency->SetFinish(false);
    emergency->WriteProgram();

    emergency->SetHour(19);
    emergency->WriteProgram();
    emergency->SetHour(22);
    emergency->WriteProgram();

    return 0;
}
