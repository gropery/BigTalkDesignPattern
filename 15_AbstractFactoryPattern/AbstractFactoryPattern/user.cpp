#include "user.h"

User::User()
{

}

int User::GetId()
{
    return _id;
}

void User::SetId(int id)
{
    _id = id;
}

string User::GetName()
{
    return _name;
}

void User::SetName(string name)
{
    _name = name;
}
