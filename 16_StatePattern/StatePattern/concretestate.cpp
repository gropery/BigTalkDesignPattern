#include "concretestate.h"

//------------------------------------------
ForenoonState::ForenoonState(){}

void ForenoonState::WriteProgram(Work *w)
{
    if(w->GetHour() < 12)
    {
        cout<<"ForenoonState: "<<w->GetHour()<<endl;
    }else
    {
        w->SetState(new NoonState());
        w->WriteProgram();
    }
}

//------------------------------------------
NoonState::NoonState(){}

void NoonState::WriteProgram(Work *w)
{
    if(w->GetHour() < 13)
    {
        cout<<"NoonState: "<<w->GetHour()<<endl;
    }else
    {
        w->SetState(new AfternoonState());
        w->WriteProgram();
    }
}

//------------------------------------------
AfternoonState::AfternoonState(){}

void AfternoonState::WriteProgram(Work *w)
{
    if(w->GetHour() < 17)
    {
        cout<<"AfternoonState: "<<w->GetHour()<<endl;
    }else
    {
        w->SetState(new EveningState());
        w->WriteProgram();
    }
}

//------------------------------------------
EveningState::EveningState(){}

void EveningState::WriteProgram(Work *w)
{
    if(w->GetFinish())
    {
        w->SetState(new RestState());
        w->WriteProgram();
    }else
    {
        if(w->GetHour() < 21)
        {
            cout<<"EveningState: "<<w->GetHour()<<endl;
        }else
        {
            w->SetState(new SleepingState());
            w->WriteProgram();
        }
    }
}

//------------------------------------------
SleepingState::SleepingState(){}

void SleepingState::WriteProgram(Work *w)
{
    cout<<"SleepingState: "<<w->GetHour()<<endl;
}

//------------------------------------------
RestState::RestState(){}

void RestState::WriteProgram(Work *w)
{
    cout<<"RestState: "<<w->GetHour()<<endl;
}
