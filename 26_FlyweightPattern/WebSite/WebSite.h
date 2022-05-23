#ifndef WEBSITE_H
#define WEBSITE_H
#include "User.h"

class WebSite
{
public:
    virtual void Use(User *user)=0;
};

class ConcreteWebSite : public WebSite
{
private:
    string _name = "";

public:
    ConcreteWebSite(string name)
    {
        _name = name;
    }

    void Use(User *user) override
    {
       cout<<"WebType: "<<_name<<"---User: "<<user->GetName()<<endl;
    }
};

#endif // WEBSITE_H
