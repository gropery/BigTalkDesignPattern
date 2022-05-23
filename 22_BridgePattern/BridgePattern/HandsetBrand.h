#ifndef HANDSETBRAND_H
#define HANDSETBRAND_H
#include "handsetsoft.h"

//手机品牌抽象类---实现
class HandsetBrand
{
protected:
    HandsetSoft *_soft;

public:
    void SetHandsetSoft(HandsetSoft *soft)
    {
        _soft = soft;
    }

    virtual void Run()=0;
};

//品牌N
class HandsetBrandN : public HandsetBrand
{
public:
    void Run() override
    {
        _soft->Run();
    }
};

//品牌M
class HandsetBrandM : public HandsetBrand
{
public:
    void Run() override
    {
        _soft->Run();
    }
};

#endif // HANDSETBRAND_H
