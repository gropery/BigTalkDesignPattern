#include <iostream>
#include "iuser.h"
#include "department.h"
#include "concretefactory.h"

using namespace std;

int main()
{
    //生产对象
    User *user = new User();
    Department *department = new Department();

    //sql工厂
    IFactory *factory1 = new SqlServerFactory();

    //sql工厂生成user对象
    IUser *iu1 = factory1->CreateUser();
    iu1->Insert(user);
    iu1->GetUser(1);

    //sql工厂生产department对象
    IDepartment *id1 = factory1->CreateDepartment();
    id1->Insert(department);
    id1->GetDepartment(1);

    //access工厂
    IFactory *factory2 = new AccessFactory();

    //access工厂生产user对象
    IUser *iu2 = factory2->CreateUser();
    iu2->Insert(user);
    iu2->GetUser(1);

    //access工厂生产department对象
    IDepartment *id2 = factory2->CreateDepartment();
    id2->Insert(department);
    id2->GetDepartment(1);

    return 0;
}
