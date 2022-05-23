#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

using namespace std;

class User
{
private:
    string _name;

public:
    User(string name)
    {
        _name = name;
    }

    string GetName()
    {
        return _name;
    }
};

#endif // USER_H
