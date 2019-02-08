#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int first[a] = {2,3,4,5,6};
    cout << first << endl;
    for(int b = a-1; b >= 0; b--)
        cout << first[b] << endl;

    int *d = &first[2];
    cout << *d << endl;
}
