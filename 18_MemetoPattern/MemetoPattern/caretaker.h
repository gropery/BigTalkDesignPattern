#ifndef CARETAKER_H
#define CARETAKER_H
#include "memeto.h"

class Caretaker
{
private:
    Memeto *_memeto;

public:
    Caretaker();
    void Setmemeto(Memeto *memeto);
    Memeto *Getmemeto();
};

#endif // CARETAKER_H
