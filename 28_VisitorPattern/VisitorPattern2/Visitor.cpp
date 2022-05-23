#include "Visitor.h"

//------------------------------------------------
string Element::GetName() const
{
    return _name;
}

void ConcreteElementA::Accept(Visitor* visitor)
{
    visitor->VisitorConcreteElementA(this);
}

void ConcreteElementB::Accept(Visitor* visitor)
{
    visitor->VisitorConcreteElementB(this);
}

//------------------------------------------------
void ConcreteVisitor1::VisitorConcreteElementA(ConcreteElementA* concreteElementA) {
    cout << concreteElementA->GetName() << "---visit by---" << _name<<endl;
}

void ConcreteVisitor1::VisitorConcreteElementB(ConcreteElementB* concreteElementB) {
    cout << concreteElementB->GetName() << "---visit by---" << _name<<endl;
}

void ConcreteVisitor2::VisitorConcreteElementA(ConcreteElementA* concreteElementA) {
    cout << concreteElementA->GetName() << "---visit by---" << _name<<endl;
}

void ConcreteVisitor2::VisitorConcreteElementB(ConcreteElementB* concreteElementB) {
    cout << concreteElementB->GetName() << "---visit by---" << _name<<endl;
}
