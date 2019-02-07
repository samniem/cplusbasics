#include <iostream>
using namespace std;

class Character {
public:
    void charName(string charname) {
        name = charname;
    }
    void charHp(int hitp) {
        hp = hitp;
    }
    void charMp(int mp) {
        mana = mp;
    }
    void charDef(int defen) {
        def = defen;
    }
    void charAtk(int atak) {
        atk = atak;
    }

    void charInfo() {
    cout << "Name\t" << name << endl;
    cout << "hp\t" << hp << endl;
    cout << "mana\t" << mana << endl;
    cout << "def\t" << def << endl;
    cout << "atk\t" << atk << endl;
    cout << "\n";
    }

private:
    string name;
    int hp;
    int mana;
    int def;
    int atk;
};

int main()
{
    Character hero;
    string heroName = "Merlock";
    hero.charName(heroName);
    hero.charInfo();
    hero.charHp(200);
    hero.charMp(100);
    hero.charDef(23);
    hero.charAtk(52);
    hero.charInfo();
    return 0;
}
