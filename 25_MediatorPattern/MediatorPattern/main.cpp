#include <iostream>
#include "concretemediator.h"

using namespace std;

int main()
{
    //中介者对象
    ConcreteMediator *m = new ConcreteMediator();

    //让2个具体的同事类认识中介者对象
    ConcreteColleague1 *c1 = new ConcreteColleague1(m);
    ConcreteColleague2 *c2 = new ConcreteColleague2(m);

    //让中介者认识各个具体的同事
    m->SetConcreteColleague1(c1);
    m->SetConcreteColleague2(c2);

    //具体同事类对象的发送信息都是通过中介者转发
    c1->Send("c1");
    c2->Send("c2");

    return 0;
}
