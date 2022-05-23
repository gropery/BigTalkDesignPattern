#ifndef VISITOR_H
#define VISITOR_H
#include <iostream>
#include <string>

using namespace std;

class Visitor;

//-----------------------------------------------------------------------------
class Element
{
protected:
    string _name;

public:
    Element(const string& name):_name(name){}
    virtual ~Element() {}
    virtual void Accept(Visitor *visitor)=0;
    string GetName() const;
};

class ConcreteElementA : public Element
{
public:
    ConcreteElementA():Element("ConcreteElementA"){}
    void Accept(Visitor *visitor) override;
};

class ConcreteElementB : public Element
{
public:
    ConcreteElementB():Element("ConcreteElementB"){}
    void Accept(Visitor *visitor) override;
};

//-----------------------------------------------------------------------------
class Visitor
{
protected:
    std::string _name;

public:
    Visitor(const string& name) : _name(name) {}
    virtual ~Visitor() {}
    virtual void VisitorConcreteElementA(ConcreteElementA *concreteElementA)=0;
    virtual void VisitorConcreteElementB(ConcreteElementB *concreteElementB)=0;
};

class ConcreteVisitor1 : public Visitor
{
public:
    ConcreteVisitor1() : Visitor("ConcreteVisitor1") {}
    void VisitorConcreteElementA(ConcreteElementA *concreteElementA) override;
    void VisitorConcreteElementB(ConcreteElementB *concreteElementB) override;
};

class ConcreteVisitor2 : public Visitor
{
public:
    ConcreteVisitor2() : Visitor("ConcreteVisitor2") {}
    void VisitorConcreteElementA(ConcreteElementA *concreteElementA) override;
    void VisitorConcreteElementB(ConcreteElementB *concreteElementB) override;
};

#endif // VISITOR_H
