#ifndef CONCRETEMANAGER_H
#define CONCRETEMANAGER_H

#include "Manager.h"

class ConcreteManager : public Manager
{
public:
    ConcreteManager(string name):Manager(name){};

    void RequestApplications(Request *request) override;
};

class Majordomo : public Manager
{
public:
    Majordomo(string name):Manager(name){};

    void RequestApplications(Request *request) override;
};

class GeneralManager : public Manager
{
public:
    GeneralManager(string name):Manager(name){};

    void RequestApplications(Request *request) override;
};

#endif // CONCRETEMANAGER_H
