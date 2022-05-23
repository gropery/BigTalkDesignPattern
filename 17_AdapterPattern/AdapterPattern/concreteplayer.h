#ifndef CONCRETEPLAYER_H
#define CONCRETEPLAYER_H

#include "player.h"

//--------------------------------------
class Forwards : public Player
{
public:
    Forwards(string name):Player(name){};
    void Attack() override;
    void Defense() override;
};

//--------------------------------------
class Center : public Player
{
public:
    Center(string name):Player(name){};
    void Attack() override;
    void Defense() override;
};

//--------------------------------------
class Guards : public Player
{
public:
    Guards(string name):Player(name){};
    void Attack() override;
    void Defense() override;
};

#endif // CONCRETEPLAYER_H
