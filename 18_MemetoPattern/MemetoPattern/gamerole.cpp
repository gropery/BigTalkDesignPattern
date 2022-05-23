#include "gamerole.h"

GameRole::GameRole()
{

}

void GameRole::StateDisplay()
{
    cout<<"vit= "<<_vit<<endl;
    cout<<"atk= "<<_atk<<endl;
    cout<<"def= "<<_def<<endl;
}

void GameRole::SetInitState()
{
    _vit = 100;
    _atk = 100;
    _def = 100;
}

void GameRole::Fight()
{
    _vit = 0;
    _atk = 0;
    _def = 0;
}

Memeto * GameRole::SaveStateMemeto()
{
    return new Memeto(_vit, _atk, _def);
}

void GameRole::RecoveryState(Memeto *memeto)
{
    _vit = memeto->GetVit();
    _atk = memeto->GetAtk();
    _def = memeto-> Getdef();
}
