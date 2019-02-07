#include <iostream>

using namespace std;

void addition(int a, int b)
{
    int sum = a + b;
    cout << a << " + " << b << " = " << sum << "\n";
}

void subtraction(int a, int b)
{
    int subt = a - b;
    cout << a << " - " << b << " = " << subt << "\n";
}

void division(float a, float b)
{
    float div = a / b;
    cout << a << " / " << b << " = " << div << "\n";
}

void multiplication(int a, int b)
{
    int mult = a * b;
    cout << a << " * " << b << " = " << mult << "\n";
}

int main()
{
    int a;
    int b;
    int sum;
    char operation;
    cout << "This is a simple calculator\n";
    cout << "Enter first number:\n";
    cin >> a;
    cout << "Enter second number:\n";
    cin >> b;
    cout << "Enter the operation (+, -, * or /)\n";
    cin >> operation;
    if (operation == '+')
        addition(a, b);
    else if (operation == '-')
        subtraction(a,b);
    else if (operation == '/')
        division(a, b);
    else if (operation == '*')
        multiplication(a, b);
    else
        cout << "Bad operation\n";
        return 1;

    return 0;

g}
