#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int mod;
    do{
        mod = a % 5;
        cout << mod << endl;
        a++;
    }while(a<10);
}
