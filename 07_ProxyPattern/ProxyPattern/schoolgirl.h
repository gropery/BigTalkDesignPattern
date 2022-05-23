#ifndef SCHOOLGIRL_H
#define SCHOOLGIRL_H
#include <string>
using namespace std;

class SchoolGirl
{
public:
    SchoolGirl();
    void SetName(string name);
    string GetName(void);

private:
    string _name;
};

#endif // SCHOOLGIRL_H
