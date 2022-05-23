#include <iostream>
#include "testpapera.h"
#include "testpaperb.h"

using namespace std;

int main()
{
    TestPaperA *ta = new TestPaperA();
    ta->TestQuestion1();
    ta->TestQuestion2();
    ta->TestQuestion3();

    AbstractTestPaper *tb = new TestPaperB();
    tb->TestQuestion1();
    tb->TestQuestion2();
    tb->TestQuestion3();

    return 0;
}
