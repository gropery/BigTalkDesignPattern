#ifndef ITERATOR_H
#define ITERATOR_H
#include <string>

using namespace std;

class Iterator
{
public:
    Iterator();
    virtual string First()=0;
    virtual string Next()=0;
    virtual bool IsDone()=0;
    virtual string CurrentItem()=0;
};

#endif // ITERATOR_H
