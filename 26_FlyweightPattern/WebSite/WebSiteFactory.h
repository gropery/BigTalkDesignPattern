#ifndef WEBSITEFACTORY_H
#define WEBSITEFACTORY_H
#include <map>
#include <string>
#include "WebSite.h"

using namespace std;

class WebSiteFactory
{
private:
    map<string, ConcreteWebSite*> _Flyweights;

public:
    WebSite * GetWebSiteCategory(string key)
    {
        if(_Flyweights.find(key) == _Flyweights.end())
        {
            _Flyweights.insert({key, new ConcreteWebSite(key)});
        }
        return _Flyweights[key];
    }

    int GetWebSiteCount()
    {
        return _Flyweights.size();
    }
};

#endif // WEBSITEFACTORY_H
