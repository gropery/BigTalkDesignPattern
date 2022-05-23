#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>
using namespace std;

class Department
{
private:
    int _id;
    string _name;

public:
    Department();
    int GetId();
    void SetId(int id);
    string GetName();
    void SetName(string name);
};

#endif // DEPARTMENT_H
