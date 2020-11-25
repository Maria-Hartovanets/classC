#ifndef CINEMA_H
#define CINEMA_H


#include <string>

using namespace std;

class Cinema
	/*    By the end of this project my class Cinema menas 
	      database of all movies in only one cinema     */
{
public:

	Cinema() {}
	Cinema(string nameMovie, string genre, int rating ) {
		
		this->nameMovie = nameMovie;
		this->genre = genre;
		this->rating = rating;
	}
	
protected:
	string nameMovie;
	string genre;
	int rating;
	

};

#endif // !CINEMA_H

