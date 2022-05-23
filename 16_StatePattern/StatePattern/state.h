#ifndef STATE_H
#define STATE_H
#include <string>
#include <iostream>

using namespace std;

class Work;

class State
{
public:
    State();
    virtual void  WriteProgram(Work *w)=0;
};

#endif // STATE_H
