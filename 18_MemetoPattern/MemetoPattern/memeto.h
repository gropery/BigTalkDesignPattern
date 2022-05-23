#ifndef MEMETO_H
#define MEMETO_H


class Memeto
{
private:
    int _vit;
    int _atk;
    int _def;

public:
    Memeto(int vit, int atk, int def);
    int GetVit();
    int GetAtk();
    int Getdef();
};

#endif // MEMETO_H
