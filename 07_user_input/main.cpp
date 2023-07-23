#include <iostream>

using namespace std;

int main()
{
  // string input
  string name;
  cout << "Enter you name: ";
  getline(cin, name);

  cout << "Hello " << name << endl;

  // numeric or character input
  int age;
  cout << "Enter your age: ";
  cin >> age;

  cout << "You are " << age << " years old." << endl;

  cout << "6 months ago, you were " << age - 0.5 << " years old." << endl;

  return 0;
}