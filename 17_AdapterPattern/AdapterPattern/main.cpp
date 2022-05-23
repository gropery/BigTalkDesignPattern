#include <iostream>
#include "concreteplayer.h"
#include "translator.h"
using namespace std;

int main()
{
    Player *b = new Forwards("bbb");
    b->Attack();

    Player *m = new Guards("mmm");
    m->Attack();

//    Player *ym1 = new Center("ym1");
//    ym1->Attack();
//    ym1->Defense();

    Player *ym2 = new Translator("ym2");
    ym2->Attack();
    ym2->Defense();

    return 0;
}
