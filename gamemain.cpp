#include <iostream>
#include "gamechars.h"
#include "gamechars.cpp"
using namespace std;

int main()
{
    Character hero;
    string heroName = "Merlock";
    hero.charInfo();
    hero.charName(heroName);
    hero.charHp(200);
    hero.charMp(100);
    hero.charDef(23);
    hero.charAtk(52);
    hero.charInfo();

    Character goblin1;
    goblin1.charName("Goblin 1");
    goblin1.charHp(35);
    goblin1.charMp(0);
    goblin1.charDef(4);
    goblin1.charAtk(5);
    goblin1.charInfo();

    Character goblin2;
    goblin1.charName("Goblin 2");
    goblin1.charHp(36);
    goblin1.charMp(1);
    goblin1.charDef(3);
    goblin1.charAtk(4);
    goblin1.charInfo();
    return 0;
}
