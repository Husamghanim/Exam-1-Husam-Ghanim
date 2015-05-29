//I affirm that all code given below was written solely by me, Husam Ghanim, and that any help I 
//received adhered to the rules stated for this exam.


#include "Theater.h"
#include <iostream>

int Theater::counter = 0;
int Theater::popcorePrice = 0;
int Theater::cokePrice = 0;


Theater::Theater()
{

}
Theater::Theater(string Name, string Phone)
{
	theaterName = Name;
	phoneNumber = Phone;
}

void Theater::AddMovie(Movie& Movie)
{


	timeKeeper[counter] = Movie.GetShowtime();
	genreKeeper[counter] = Movie.GetGenre();
	movieTitleKeeper[counter] = Movie.GetTitle();

	counter++;
}
string Theater::GetMovieForHour(int Hour)
{
	string movie;
	for (int i = 0; i < counter; i++)
	{
		if (Hour == timeKeeper[i])
		{
			movie = movieTitleKeeper[i];
			i = counter + 1;
		}
		else if ((i == counter && Hour != timeKeeper[counter]) && (Hour<0 || Hour>24))
			movie = Movie().GetTitle();
		else
		{
			if (Hour>timeKeeper[i] && Hour < timeKeeper[i + 1])
				movie = movieTitleKeeper[i + 1];  
		}
	}
		
	return movie;

}
int Theater::GetShowTimeForGenre(string Gtime)
{

	int time;
	for (int i = 0; i < counter; i++)
	{
		if (Gtime == genreKeeper[i])
			time = timeKeeper[i];
		else
			time = 0;

	}
	return time;
}
int Theater::GetCokePrice()
{
	return cokePrice;
}
int Theater::GetPopcorePrice()
{
	return popcorePrice;
}

void Theater::GetCounts()
{
	cout << "Counts are " << counter << endl;
}