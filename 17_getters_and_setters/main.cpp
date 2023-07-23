#include <iostream>

using namespace std;

class Movie
{
private:
  string title;
  string director;
  string rating;

public:
  Movie(string aTitle, string aDirector, string aRating)
  {
    setTitle(aTitle);
    setDirector(aDirector);
    setRating(aRating);
  }

  void setRating(string aRating)
  {
    if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R")
    {
      rating = aRating;
    }
    else
    {
      rating = "NR";
    }
  }

  string getRating()
  {
    return rating;
  }

  void setTitle(string aTitle)
  {
    title = aTitle;
  }

  string getTitle()
  {
    return title;
  }

  void setDirector(string aDirector)
  {
    director = aDirector;
  }

  string getDirector()
  {
    return director;
  }
};

int main()
{
  Movie movie1("Movie 1", "Director 1", "R");

  // prints out R
  cout << movie1.getRating() << endl;

  // defaults to NR
  movie1.setRating("Random");

  // prints out NR
  cout << movie1.getRating() << endl;

  cout << movie1.getDirector() << endl;
  cout << movie1.getTitle() << endl;

  return 0;
}