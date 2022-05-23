#ifndef TESTPAPERB_H
#define TESTPAPERB_H

#include "abstracttestpaper.h"

class TestPaperB : public AbstractTestPaper
{
public:
    TestPaperB();
    string Answer1() override;
    string Answer2() override;
    string Answer3() override;
};

#endif // TESTPAPERB_H
