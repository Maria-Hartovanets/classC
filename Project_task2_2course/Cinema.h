#ifndef CINEMA_H
#define CINEMA_H


#include <string>
#include "Temp.h"

using namespace std;

class Cinema:public Temp
	/*    By the end of this project my class Cinema menas 
	      database of all movies in only one cinema     */
{
public:


	Cinema(string nameMovie, string genre, int rating = 10) {
		
		this->nameMovie = nameMovie;
		this->genre = genre;
		this->rating = rating;
	}

	int GetRating() {
		return rating;
	}

	string GetName() {
		return nameMovie;
	}
	
protected:
	string nameMovie;
	string genre;
	int rating;
	

};

#endif // !CINEMA_H

