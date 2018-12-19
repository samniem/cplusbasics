#include <iostream>
using namespace std;

void hello()
{
  cout << "And you thought hello world was over already?!" << std::endl;
}

int main()
{
  int number = 5;
  cout << "Hello World! times " << number << std::endl;
  hello();
  return 0;
}
