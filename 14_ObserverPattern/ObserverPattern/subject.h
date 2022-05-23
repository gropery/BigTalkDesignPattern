#ifndef SUBJECT_H
#define SUBJECT_H
#include "observer.h"
#include <list>
#include <string>
#include <iostream>

using namespace std;

class Subject
{
private:
    list <Observer *> _observer;

public:
    Subject();
    void Attach(Observer *observer);
    void Detach(Observer *observer);
    void Notify();
};

#endif // SUBJECT_H
