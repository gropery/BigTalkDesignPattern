#ifndef PLAYCONTEXT_H
#define PLAYCONTEXT_H
#include <string>

using namespace std;

class PlayContext
{
private:
    //演奏文本
    string _text;

public:
    void SetText(string text)
    {
        _text = text;
    }

    string GetText()
    {
        return _text;
    }
};

#endif // PLAYCONTEXT_H
