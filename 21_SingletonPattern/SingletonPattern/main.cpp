#include <iostream>
#include "singleton.h"

using namespace std;

int main()
{
    auto a = LazySingleton::GetInstance();
    a->show();

    auto& b = EagerSingleton::GetInstance();
    b.show();

    auto& c = MeyersSingleton::GetInstance();
    c.show();

    return 0;
}
