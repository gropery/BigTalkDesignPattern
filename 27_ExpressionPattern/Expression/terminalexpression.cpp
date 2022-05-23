#include "terminalexpression.h"
#include <iostream>

//----------------------------------------------------
Note::Note(){}

void Note::Excute(string key, double value)
{
    (void) value;

    //获得的key为其他
    string note="";
    if(key=="C")
        note = "Do";
    else if(key=="D")
        note = "Re";
    else if(key=="E")
        note = "Mi";
    else if(key=="F")
        note = "Fa";
    else if(key=="G")
        note = "So";
    else if(key=="A")
        note = "La";
    else if(key=="B")
        note = "Ti";

    cout<<note<<" ";
}

//----------------------------------------------------
Scale::Scale(){}

void Scale::Excute(string key, double value)
{
    (void) key;

    //获得的key为"O"
    string scale="";
    switch(int(value))
    {
        case 1:
            scale="LowScale";
            break;
        case 2:
            scale="MidScale";
            break;
        case 3:
            scale="HighScale";
            break;
    }

    cout<<scale<<" ";
}

//----------------------------------------------------
Speed::Speed(){}

void Speed::Excute(string key, double value)
{
    (void) key;

    //获得的key为"T"
    string speed="";
    if(value<500)
        speed = "FastSpeed";
    else if(value>=1000)
        speed = "SlowSpeed";
    else
        speed = "MidSpeed";

    cout<<speed<<" ";
}
