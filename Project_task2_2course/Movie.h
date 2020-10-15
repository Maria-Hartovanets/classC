#ifndef MOVIE_H
#define MOVIE_H

#include"Cinema.h"
#include "Temp.h"
#include <string>

using namespace std;

class Movie: public Cinema
{

public:

	Movie(string nameMovie,string genre, int rating);

	string strInfo() {
		return  nameMovie + " " + genre
			+ " " + to_string(rating) + "\n";
	}

	void writeInfo();


};
#endif
