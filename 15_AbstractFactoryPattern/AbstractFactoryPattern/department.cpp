#include "department.h"

Department::Department()
{

}

int Department::GetId()
{
    return _id;
}

void Department::SetId(int id)
{
    _id = id;
}

string Department::GetName()
{
    return _name;
}

void Department::SetName(string name)
{
    _name = name;
}

