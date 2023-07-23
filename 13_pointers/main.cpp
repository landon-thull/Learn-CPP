#include <iostream>

using namespace std;

int main()
{
  int age = 19;

  // stores the pointer of the referenced variable
  int *pAge = &age;

  // ampersand refrences the pointer instead of the value
  cout << &age << endl;

  // prints the pointer of the referenced variable
  cout << pAge << endl;

  // prints the value of the referenced variable
  cout << *pAge << endl;

  return 0;
}