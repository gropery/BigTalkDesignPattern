#ifndef IFACTORY_H
#define IFACTORY_H
#include "leifeng.h"

//对象创建工厂
class IFactory
{
public:
    IFactory();
    virtual LeiFeng * CreateLeiFeng()=0;
};

#endif // IFACTORY_H
