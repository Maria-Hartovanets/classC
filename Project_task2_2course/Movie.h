#ifndef MOVIE_H
#define MOVIE_H

#include"Cinema.h"
#include <string>

using namespace std;

class Movie
{

public:

	string nameMovie;
	string genre;
	int rating;

	Movie(string = "", int = 0, string = "");

	void InfoMovie(string nameMovie, string genre, int rating);

	virtual void writeInfoC();

	void Info();


};

#endif // !MOVIE_H