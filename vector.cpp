#include <iostream>
#include <vector>
using namespace std;

int main()
{
    size_t size = 20;
    vector<string> v(size);
    for (int i=0; i<size; i++)
    {
        v[i] = "abcd";
        cout << v[i] << endl;
    }
}
