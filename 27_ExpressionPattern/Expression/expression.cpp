#include "expression.h"

Expression::Expression()
{
}

void Expression::Interpret(PlayContext *context)
{
    if(context->GetText().length() == 0)
    {
        return;
    }
    else
    {
        //获取当前文本第一条命令,解析出名字字母及参数值
        //例如 "O 3 E 0.5 G 0.5 A 3"
        //则playKey为O,playValue为3
        string playKey = context->GetText().substr(0, 1);
        context->SetText(context->GetText().substr(2));
        string tmp = context->GetText();
        double playValue = stof(tmp.substr(0, tmp.find_first_of(" ")));
        //获取playKey和playValue后将其从演奏文本中移除
        //"O 3 E 0.5 G 0.5 A 3"
        //"E 0.5 G 0.5 A 3"
        context->SetText(tmp.substr(tmp.find_first_of(" ")+1));

        Excute(playKey, playValue);
    }
}
