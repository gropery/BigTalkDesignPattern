#ifndef HANDSETSOFT_H
#define HANDSETSOFT_H
#include <iostream>

using namespace std;

//手机软件抽象类---抽象
class HandsetSoft
{
public:
    virtual void Run()=0;
};

//手机游戏软件
class HandsetGame: public HandsetSoft
{
public:
    void Run() override
    {
        cout << "Run HandsetGame" <<endl;
    }
};

//手机通讯录软件
class HandsetAddressList: public HandsetSoft
{
public:
    void Run() override
    {
        cout << "Run HandsetAddressList" <<endl;
    }
};

#endif // HANDSETSOFT_H
