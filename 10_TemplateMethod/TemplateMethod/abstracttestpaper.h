#ifndef ABSTRACTTESTPAPER_H
#define ABSTRACTTESTPAPER_H

#include <string>
#include <iostream>

using namespace std;


class AbstractTestPaper
{
public:
    AbstractTestPaper();
    void TestQuestion1();
    void TestQuestion2();
    void TestQuestion3();
    virtual string Answer1()=0;
    virtual string Answer2()=0;
    virtual string Answer3()=0;
};

#endif // ABSTRACTTESTPAPER_H
