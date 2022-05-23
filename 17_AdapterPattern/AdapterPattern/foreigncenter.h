#ifndef FOREIGNCENTER_H
#define FOREIGNCENTER_H
#include <string>
#include <iostream>

using namespace std;

class ForeignCenter
{
private:
    string _name;

public:
    ForeignCenter(string name):_name(name){};
    void attack();
    void defense();
};

#endif // FOREIGNCENTER_H
