#include "work.h"
#include "concretestate.h"

Work::Work()
{
    _current = new ForenoonState();
}

void Work::SetHour(double hour)
{
    _hour = hour;
}

double Work::GetHour()
{
    return _hour;
}

void Work::SetFinish(bool finish)
{
    _finish = finish;
}

bool Work::GetFinish()
{
    return _finish;
}

void Work::SetState(State *s)
{
    _current = s;
}

void Work::WriteProgram()
{
    _current->WriteProgram(this);
}
