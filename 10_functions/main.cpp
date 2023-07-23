#include <iostream>

using namespace std;

void sayHello(string firstName, string lastName)
{
  cout << "Hello " << firstName + " " + lastName << endl;
}

int main()
{
  sayHello("Landon", "Thull");
  sayHello("Ginger", "Black");

  return 0;
}