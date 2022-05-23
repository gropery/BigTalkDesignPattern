#include "caretaker.h"

Caretaker::Caretaker()
{

}

void Caretaker::Setmemeto(Memeto *memeto)
{
    _memeto = memeto;
}

Memeto *Caretaker::Getmemeto()
{
    return _memeto;
}
