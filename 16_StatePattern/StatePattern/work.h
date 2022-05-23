#ifndef WORK_H
#define WORK_H

class State;

class Work
{
private:
    State *_current;
    double _hour;
    bool _finish;
public:
    Work();
    void SetHour(double hour);
    double GetHour();
    void SetFinish(bool finish);
    bool GetFinish();
    void SetState(State *s);
    void WriteProgram();
};

#endif // WORK_H
