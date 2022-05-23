#ifndef MANAGER_H
#define MANAGER_H
#include <string>
#include <iostream>
#include "request.h"

using namespace std;


class Manager
{
protected:
    string _name;
    Manager *_superior;

public:
    Manager(string name)
    {
        _name = name;
    }

    void SetSuperior(Manager *superior)
    {
        _superior = superior;
    }

    virtual void RequestApplications(Request *request)=0;
};

#endif // MANAGER_H
