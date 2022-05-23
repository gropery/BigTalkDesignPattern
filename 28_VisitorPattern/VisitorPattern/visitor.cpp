#include "visitor.h"

//------------------------------------------------
string Person::GetName() const
{
    return _name;
}

void Man::Accept(Action* visitor)
{
    visitor->GetManConclusion(this);
}

void Woman::Accept(Action* visitor)
{
    visitor->GetWomanConclusion(this);
}

//------------------------------------------------
void Success::GetManConclusion(Man* m) {
    cout << m->GetName() << ", " << _name
            << ": man's conclusion for Success\n";
}

void Success::GetWomanConclusion(Woman* w) {
    cout << w->GetName() << ", " << _name
            << ": woman's conclusion for Success\n";
}

void Failing::GetManConclusion(Man* m) {
    cout << m->GetName() << ", " << _name
            << ": man's conclusion for Failing\n";
}

void Failing::GetWomanConclusion(Woman* w) {
    cout << w->GetName() << ", " << _name
            << ": woman's conclusion for Failing\n";
}

void Amativeness::GetManConclusion(Man* m) {
    cout << m->GetName() << ", " << _name
            << ": man's conclusion for Amativeness\n";
}

void Amativeness::GetWomanConclusion(Woman* w) {
    cout << w->GetName() << ", " << _name
            << ": woman's conclusion for Amativeness\n";
}
