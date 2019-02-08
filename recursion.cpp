#include <iostream>
using namespace std;

int a = 0;

void mana()
{
    cout << "WTFBBQ" << endl;
    ++a;
    while(::a < 10)
    {
        mana();
    }
}

int main()
{
    mana();
}
