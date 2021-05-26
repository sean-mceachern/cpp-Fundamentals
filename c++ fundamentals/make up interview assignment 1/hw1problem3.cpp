#include <iostream>
#include <string>
using namespace std;


class Movie
{
private:
	string title;
	float rating;
	int year;
public:
	//constructors
	Movie(){title = "unknown"; rating = 0.0; year = 2018;}
	Movie(string t, int y, float r){title = t; rating = r; year = y;}

	//accessors
	string getTitle() {return title; }
	float getRating() {return rating; }
	int getYear() { return year; }
	
	//mutators
	void setTitle(string t){title = t; }
	void setRating(float r){rating = r; }
	void setYear ( int y){year = y; }	
};

// string Movie::getTitle ();
// void Movie::setTitle (string newTitle);

// int Movie::getYear ();
// void Movie::setYear (int newYear);

// float Movie::getRating ();
// void Movie::setRating (float newRating);


int main(){
	Movie movie1, movie2, movie3;
	movie1.setTitle("Lion King ");
	movie1.setRating(10.00);
	movie1.setYear(1994);

	movie2.setTitle("Pulp Fiction ");
	movie2.setRating(9.75);
	movie2.setYear(1997);

	movie3.setTitle("Friday The Thirteenth ");
	movie3.setRating(6.75);
	movie3.setYear(1989);

	movie1.getTitle();
	movie1.getRating();
	movie1.getYear();

	movie2.getTitle();
	movie2.getRating();
	movie2.getYear();

	movie3.getTitle();
	movie3.getRating();
	movie3.getYear();


	cout << endl;
	cout << movie1.getTitle() << ", " << movie1.getRating() << ", " << movie1.getYear() << endl;

	cout << movie2.getTitle() << ", " << movie2.getRating() << ", " << movie2.getYear() << endl;

	cout << movie3.getTitle() << ", " << movie3.getRating() << ", " << movie3.getYear() << endl;
	cout << endl;



	return 0;
}
