#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include "observer.h"
#include "concretesubject.h"

class ConcreteObserver : public Observer
{
private:
    string _name;
    string _ObserverState;
    ConcreteSubject *_subject;

public:
    ConcreteObserver(ConcreteSubject *subject, string name);
    void Update() override;
};

#endif // CONCRETEOBSERVER_H
