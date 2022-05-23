#include <iostream>
#include "gamerole.h"
#include "caretaker.h"

using namespace std;

int main()
{
    //大战前
    GameRole *li = new GameRole();
    li->SetInitState();
    li->StateDisplay();

    //保存进度
    Caretaker *sateAdmin = new Caretaker();
    sateAdmin->Setmemeto(li->SaveStateMemeto());

    //大战boss，损耗至0
    li->Fight();
    li->StateDisplay();

    //恢复之前存档
    li->RecoveryState(sateAdmin->Getmemeto());
    li->StateDisplay();

    return 0;
}
