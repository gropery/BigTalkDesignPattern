#ifndef IUSER_H
#define IUSER_H
#include "user.h"

class IUser
{
public:
    IUser();
    virtual void Insert(User *user)=0;
    virtual User * GetUser(int id)=0;
};

#endif // IUSER_H
