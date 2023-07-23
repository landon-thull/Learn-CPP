#include <iostream>

using namespace std;

double cube(double num)
{
  double result = num * num * num;
  return result;
}

int main()
{
  double cubed = cube(0.75);

  cout << cubed << endl;
}