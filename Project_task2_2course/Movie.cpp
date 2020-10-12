#include "Movie.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


Movie::Movie(string nameMovie, int rating, string genre)
{
	this->nameMovie = nameMovie;
	this->genre = genre;
	this->rating = rating;
}

void Movie::InfoMovie(string nameMovie, string genre, int rating)
{
	this->rating = rating;
	this->nameMovie = nameMovie;
	this->genre = genre;

}

void Movie::writeInfoC()
{
	cout << "     Info of movie:" << endl;
	cout << "Name: " << nameMovie << "\ngenre: " << genre << " \nrating:" << rating << endl;
}


void Movie::Info()
{

	cout << "movie: " << nameMovie << "\ngenre: " << genre << "\n";
}

