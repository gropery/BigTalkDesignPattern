#ifndef CONCRETEUSER_H
#define CONCRETEUSER_H
#include <string>
#include <iostream>
#include "iuser.h"
using namespace  std;

class SqlserverUser : public IUser
{
public:
    SqlserverUser();
    void Insert(User *user) override;
    User * GetUser(int id) override;
};

class AccessUser : public IUser
{
public:
    AccessUser();
    void Insert(User *user) override;
    User * GetUser(int id) override;
};

#endif // CONCRETEUSER_H
