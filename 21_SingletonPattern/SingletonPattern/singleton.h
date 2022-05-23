#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>

using namespace std;

//-----------------------------------------------
//懒汉式
class LazySingleton
{
private:
    static LazySingleton *p;
    LazySingleton();

public:
    static LazySingleton * GetInstance();
    void show();
};

//-----------------------------------------------
//饿汉式
class EagerSingleton
{
private:
    static EagerSingleton instance;
    EagerSingleton();

public:
    static EagerSingleton& GetInstance();
    void show();
};

//-----------------------------------------------
// Meyers singleton, only used in C++11 and later
class MeyersSingleton
{
private:
    MeyersSingleton();

public:
    static MeyersSingleton& GetInstance();
    void show();
};

#endif // SINGLETON_H
