#include <iostream>
#include <vector>
using namespace std;

int main()
{
    size_t s =10;
    vector<vector<char> > matrix(s);
    for (int i = 0; i < s; i++)
    {
        matrix[i].resize(s);
    }
    for(int x = 0; x < s; x++)
    {
        for(int y = 0; y < s; y++)
        {
            matrix[x][y] = 0x21+x*s+y;
            cout << matrix[x][y] << "\t";
        }
        cout << endl;
    }
}
