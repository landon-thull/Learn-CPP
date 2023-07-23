#include <iostream>

using namespace std;

class Book
{
public:
  string title;
  string author;
  int pages;

  // no args constructor
  Book()
  {
    title = "No Title";
    author = "No Author";
    pages = 0;
  }

  // all args constructor
  Book(string aTitle, string aAuthor, int aPages)
  {
    title = aTitle;
    author = aAuthor;
    pages = aPages;
  }
};

int main()
{
  // all args constructor
  Book book1("Harry Potter", "JK Rowling", 500);

  cout << book1.title << endl;

  // no args constructor
  Book book2;

  cout << book2.title << endl;

  return 0;
}