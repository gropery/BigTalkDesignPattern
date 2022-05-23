#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string _name;

public:
    Person();
    Person(string name);
    virtual void Show();

};

#endif // PERSON_H
