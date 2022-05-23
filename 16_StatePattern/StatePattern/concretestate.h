#ifndef CONCRETESTATE_H
#define CONCRETESTATE_H

#include "state.h"
#include "work.h"

//------------------------------------------
class ForenoonState : public State
{
public:
    ForenoonState();
    void WriteProgram(Work *w) override;
};

//------------------------------------------
class NoonState : public State
{
public:
    NoonState();
    void WriteProgram(Work *w) override;
};

//------------------------------------------
class AfternoonState : public State
{
public:
    AfternoonState();
    void WriteProgram(Work *w) override;
};

//------------------------------------------
class EveningState : public State
{
public:
    EveningState();
    void WriteProgram(Work *w) override;
};

//------------------------------------------
class SleepingState : public State
{
public:
    SleepingState();
    void WriteProgram(Work *w) override;
};

//------------------------------------------
class RestState : public State
{
public:
    RestState();
    void WriteProgram(Work *w) override;
};

#endif // CONCRETESTATE_H
