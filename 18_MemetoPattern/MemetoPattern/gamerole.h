#ifndef GAMEROLE_H
#define GAMEROLE_H
#include <string>
#include <iostream>
#include "memeto.h"

using namespace std;

class GameRole
{
private:
    int _vit;
    int _atk;
    int _def;

public:
    GameRole();
    void StateDisplay();
    void SetInitState();
    void Fight();

    Memeto * SaveStateMemeto();
    void RecoveryState(Memeto * memeto);

};

#endif // GAMEROLE_H
