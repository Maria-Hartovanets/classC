#include "Movie.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


Movie::Movie(string nameMovie, string genre, int rating) :
	Cinema(nameMovie, genre, rating){}


int Movie::GetRating()
{
	return rating;
}

string Movie::GetStorageName()
{
	return "Movie.txt";
}

string Movie::GetStorageNameOut()
{
	return "Movieout.txt";
}

string Movie::GetHeader()
{
	return "Movie info:\n";
}

ifstream& operator>>(ifstream& fin, Movie& movie)
{
	string nameMovie, genre;
	int rating;

	fin >> nameMovie >> rating >> genre;
	movie.nameMovie = nameMovie;
	movie.genre = genre;
	movie.rating =rating;

	return fin;
}

ofstream& operator<<(ofstream& fout, Movie& movie)
{
	char pr = ' ';
	fout << movie.nameMovie << pr
		<< movie.genre << pr
		<< movie.rating << pr;
	return fout;
}

ostream& operator<<(ostream& out, Movie&movie)
{
	out << "Name of movie: " << movie.nameMovie
		<< "\t|\tGenre: " << movie.genre
		<< "\t|\tRating: " << movie.rating;
		return out;
}
