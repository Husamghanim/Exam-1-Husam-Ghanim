//I affirm that all code given below was written solely by me, Husam Ghanim, and that any help I 
//received adhered to the rules stated for this exam.




#include "Movie.h"



Movie::Movie()
{
	movieTitle = "";


}
Movie::Movie(string Title, string Genre, int Showtime)
{
	movieTitle = Title;
	genre = Genre;
	showtime = Showtime;

}

void Movie::CheckGenre()
{
	if (genre != "Action" || genre != "Comedy" || genre != "Horror" || genre != "Documentary")
		genre = "Comedy";

}

string Movie::GetGenre()
{
	return genre;
}

int Movie::GetShowtime()
{
	return showtime;
}

string Movie::GetTitle()
{
	return movieTitle;
}