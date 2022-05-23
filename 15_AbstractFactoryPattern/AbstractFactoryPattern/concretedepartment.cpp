#include "concretedepartment.h"

SqlserverDepartment::SqlserverDepartment()
{

}

void SqlserverDepartment::Insert(Department *department)
{
    (void)(department);
    cout<<"SqlserverDepartment::Insert"<<endl;
}

Department * SqlserverDepartment::GetDepartment(int id)
{
    (void)(id);
    cout<<"SqlserverDepartment::GetDepartment"<<endl;
    return NULL;
}

AccessDepartment::AccessDepartment()
{

}

void AccessDepartment::Insert(Department *department)
{
    (void)(department);
    cout<<"AccessDepartment::Insert"<<endl;
}

Department * AccessDepartment::GetDepartment(int id)
{
    (void)(id);
    cout<<"AccessDepartment::GetDepartment"<<endl;
    return NULL;
}
