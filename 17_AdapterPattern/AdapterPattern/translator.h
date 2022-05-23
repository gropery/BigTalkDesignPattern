#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include "player.h"
#include "foreigncenter.h"

class Translator : public Player
{
private:
    ForeignCenter f;

public:
    Translator(string name):Player(name),f(name){};
    void Attack() override;
    void Defense() override;
};

#endif // TRANSLATOR_H
