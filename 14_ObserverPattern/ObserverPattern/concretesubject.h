#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "subject.h"

class ConcreteSubject : public Subject
{
private:
    string _SubjectState;

public:
    ConcreteSubject();
    void SetSubjectState(string SubjectState);
    string GetSubjectState();
};

#endif // CONCRETESUBJECT_H
