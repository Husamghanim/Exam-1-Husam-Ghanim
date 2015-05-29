//I affirm that all code given below was written solely by me, Husam Ghanim, and that any help I 
//received adhered to the rules stated for this exam.




#ifndef THEATER_H
#define THEATER_H
#include "Movie.h"


class Theater
{
public:
	Theater();
	Theater(string, string);
	void AddMovie(Movie&);
	string GetMovieForHour(int);
	int GetShowTimeForGenre(string);
	int GetPopcorePrice();
	int GetCokePrice();
	void GetCounts();
private:
	static int cokePrice;
	static int popcorePrice;

	string theaterName;
	string phoneNumber;
	string movieForHour;

	int timeKeeper[14]; // if every movie takes 2 hours, then the max # of movies per day is 12, I added 2 more spaces out of generocity
	static int counter;
	string genreKeeper[14];
	string movieTitleKeeper[14];
};
#endif