#include <iostream>

using namespace std;

int main()
{
  int luckyNums[] = {4, 8, 15, 16, 23, 42};

  cout << luckyNums[0] << endl;

  luckyNums[0] = 1;

  cout << luckyNums[0] << endl;

  return 0;
}