#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H
#include <map>
#include <string>
#include <Flyweight.h>

using namespace std;

class FlyweightFactory
{
private:
    map<string, ConcreteFlyweight*> _Flyweights;

public:
    FlyweightFactory()
    {
        _Flyweights.insert(make_pair("X", new ConcreteFlyweight()));
        _Flyweights.insert(make_pair("Y", new ConcreteFlyweight()));
        _Flyweights.insert(make_pair("Z", new ConcreteFlyweight()));
    }

    Flyweight * GetFlyweight(string key)
    {
        map<string, ConcreteFlyweight *>::iterator it;
        it = _Flyweights.find(key);
        if(it != _Flyweights.end())
        {
            return it->second;
        }
        else
        {
            return nullptr;
        }
    }
};

#endif // FLYWEIGHTFACTORY_H
