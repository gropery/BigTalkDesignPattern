#ifndef TESTPAPERA_H
#define TESTPAPERA_H

#include "abstracttestpaper.h"

class TestPaperA : public AbstractTestPaper
{
public:
    TestPaperA();
    string Answer1() override;
    string Answer2() override;
    string Answer3() override;
};

#endif // TESTPAPERA_H
