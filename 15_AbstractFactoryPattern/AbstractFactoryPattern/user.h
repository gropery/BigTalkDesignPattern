#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User
{
private:
    int _id;
    string _name;

public:
    User();
    int GetId();
    void SetId(int id);
    string GetName();
    void SetName(string name);
};

#endif // USER_H
