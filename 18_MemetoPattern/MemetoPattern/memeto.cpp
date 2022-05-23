#include "memeto.h"

Memeto::Memeto(int vit, int atk, int def)
{
    _vit = vit;
    _atk = atk;
    _def = def;
}

int Memeto::GetVit()
{
    return _vit;
}

int Memeto::GetAtk()
{
    return _atk;
}

int Memeto::Getdef()
{
    return _def;
}
