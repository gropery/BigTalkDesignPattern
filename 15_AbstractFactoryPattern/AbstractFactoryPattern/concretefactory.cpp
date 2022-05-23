#include "concretefactory.h"

SqlServerFactory::SqlServerFactory()
{

}

IUser * SqlServerFactory::CreateUser()
{
    return new SqlserverUser();
}

IDepartment * SqlServerFactory::CreateDepartment()
{
    return new SqlserverDepartment();
}

AccessFactory::AccessFactory()
{

}

IUser * AccessFactory::CreateUser()
{
    return new AccessUser();
}

IDepartment * AccessFactory::CreateDepartment()
{
    return new AccessDepartment();
}

