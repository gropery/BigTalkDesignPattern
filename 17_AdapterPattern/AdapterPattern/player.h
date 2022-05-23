#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>

using namespace std;

class Player
{
protected:
    string _name;

public:
    Player(string name):_name(name){};
    virtual void Attack()=0;
    virtual void Defense()=0;
};

#endif // PLAYER_H
