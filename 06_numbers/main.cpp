#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int number = 15;

  // modulus operator
  cout << number % 4 << endl;

  // multiplication operator
  cout << number * 3 << endl;

  // increment, prints 15
  cout << number++ << endl;
  // number is now 16

  // decrement, prints 16
  cout << number-- << endl;
  // number is now 15

  // square root, from cmath
  cout << sqrt(number) << endl;

  return 0;
}