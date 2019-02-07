#ifndef GAMECHARS_H
#define GAMECHARS_H
using namespace std;
class Character {
public:
    Character();
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
#endif // THIRDCLASS_H
