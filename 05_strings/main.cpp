#include <iostream>

using namespace std;

int main()
{
  string phrase = "My Phrase";

  // get a specific character
  char y = phrase[1];
  cout << y << endl;

  // find the index of a string or character
  int indexOfAs = phrase.find("as", 0);
  cout << indexOfAs << endl;

  // get a substring
  string my = phrase.substr(0, 2);
  cout << my << endl;

  return 0;
}