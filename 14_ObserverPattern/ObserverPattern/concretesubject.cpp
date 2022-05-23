#include "concretesubject.h"

ConcreteSubject::ConcreteSubject()
{

}

void ConcreteSubject::SetSubjectState(string SubjectState)
{
    _SubjectState = SubjectState;
}

string ConcreteSubject::GetSubjectState()
{
    return _SubjectState;
}
