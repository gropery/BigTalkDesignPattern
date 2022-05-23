#include <iostream>
#include "terminalexpression.h"
using namespace std;

int main()
{
    PlayContext *context = new PlayContext();
    //音乐
    context->SetText("T 500 O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 E 0.5 G 0.5 A 0.5 O 3 C 1 O 2 A 0.5 G 1 C 0.5 E 0.5 D 3 ");
    Expression* expression = nullptr;
    while (context->GetText().length() > 0) {
        string str = context->GetText().substr(0, 1);
        if (str == "O") {
            expression = new Scale();
        }else if(str == "T")
        {
            expression = new Speed();
        }else
        {
            expression = new Note();
        }
        expression->Interpret(context);
    }

    return 0;
}
