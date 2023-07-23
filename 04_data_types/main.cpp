#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  // single character, uses single quotes
  char grade = 'A';

  // string of characters, uses double quotes
  string name = "Landon Thull";

  // whole number
  int age = 17;

  // floating point number, 32 bits, 24 bit mantissa
  float smallDecimal = 1.1234567;

  // floating point number, 64 bits, 53 bit mantissa
  double bigDecimal = 1.123456789012345;

  // boolean, true or false
  bool isMale = true;

  cout << "Character: " << grade << endl;
  cout << "String: " << name << endl;
  cout << "Integer: " << age << endl;
  cout << "Float: " << setprecision(8) << smallDecimal << endl;
  cout << "Double: " << setprecision(16) << bigDecimal << endl;
  cout << "Boolean: " << isMale << endl;

  return 0;
}