#include "singleton.h"

//-----------------------------------------------
//懒汉式
LazySingleton::LazySingleton()
{}

LazySingleton* LazySingleton::p = nullptr;

LazySingleton* LazySingleton::GetInstance()
{
    if (p == nullptr) {
        //这里会分配空间
        p = new LazySingleton();
    }
    return p;
}

void LazySingleton::show() {
    cout << "This is a LazySingleton instance.\n";
}

//-----------------------------------------------
//饿汉式
EagerSingleton::EagerSingleton()
{}

//这里的声明会实际分配空间
EagerSingleton EagerSingleton::instance;

EagerSingleton& EagerSingleton::GetInstance()
{
    return instance;
}

void EagerSingleton::show()
{
  cout << "This is a EagerSingleton instance.\n";
}

//-----------------------------------------------
//C++11 特性
MeyersSingleton::MeyersSingleton()
{}

MeyersSingleton& MeyersSingleton::GetInstance()
{
    //这里第一次声明会分配空间
    static MeyersSingleton instance;
    return instance;
}

void MeyersSingleton::show()
{
    std::cout << "This is a MeyersSingleton instance.\n";
}
