#include <iostream>
using namespace std;

int main()
{
    cout << "ID\tvalue\tmodulo 7" << endl;
    int recar[9];
    for (int i = 0; i < 9; i++)
    {
        recar[i] = i*3 % 7;
        cout << i <<"\t"<< i*3 << "\t" << recar[i] << endl;
    }
}
