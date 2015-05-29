//I affirm that all code given below was written solely by me, Husam Ghanim, and that any help I 
//received adhered to the rules stated for this exam.



#ifndef MOVIE_H
#define MOVIE_H
#include <string>

using namespace std;
class Movie
{
public:
	Movie();
	Movie(string, string, int);
	string GetTitle();
	string GetGenre();
	int GetShowtime();


private:
	string genre;
	void CheckGenre();
	string movieTitle;
	int showtime;







};
#endif