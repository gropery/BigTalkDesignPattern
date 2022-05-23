#include "concreteuser.h"

SqlserverUser::SqlserverUser()
{

}

void SqlserverUser::Insert(User *user)
{
    (void)(user);
    cout<<"SqlserverUser::Insert"<<endl;
}

User * SqlserverUser::GetUser(int id)
{
    (void)(id);
    cout<<"SqlserverUser::GetUser"<<endl;
    return NULL;
}

AccessUser::AccessUser()
{

}

void AccessUser::Insert(User *user)
{
    (void)(user);
    cout<<"AccessUser::Insert"<<endl;
}

User * AccessUser::GetUser(int id)
{
    (void)(id);
    cout<<"AccessUser::GetUser"<<endl;
    return NULL;
}
