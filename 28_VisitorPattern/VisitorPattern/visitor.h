#ifndef VISITOR_H_
#define VISITOR_H_
#include <iostream>
#include <string>

using namespace std;

class Action;

//------------------------------------------------
class Person
{
protected:
    string _name;

public:
    Person(const string& name) : _name(name) {}
    virtual ~Person() {}
    virtual void Accept(Action* visitor) = 0;
    string GetName() const;
};

class Man : public Person
{
public:
    Man() : Person("Man") {}
    void Accept(Action* visitor) override;
};

class Woman : public Person
{
public:
    Woman() : Person("Woman") {}
    void Accept(Action* visitor) override;
};

//------------------------------------------------
class Action
{
protected:
    std::string _name;

public:
    Action(const string& name) : _name(name) {}
    virtual ~Action() {}
    virtual void GetManConclusion(Man* m) = 0;
    virtual void GetWomanConclusion(Woman* w) = 0;
};

class Success : public Action
{
public:
    Success() : Action("Success") {}
    void GetManConclusion(Man* m) override;
    void GetWomanConclusion(Woman* w) override;
};

class Failing : public Action
{
public:
    Failing() : Action("Failing") {}
    void GetManConclusion(Man* m) override;
    void GetWomanConclusion(Woman* w) override;
};

class Amativeness : public Action
{
public:
    Amativeness() : Action("Amativeness") {}
    void GetManConclusion(Man* m) override;
    void GetWomanConclusion(Woman* w) override;
};
#endif  // VISITOR_H_
