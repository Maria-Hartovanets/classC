#ifndef MOVIE_H
#define MOVIE_H

#include"Cinema.h"
#include <iostream>
#include <string>
#include<fstream>

using namespace std;

class Movie: public Cinema
{

public:
	Movie(){}
	Movie(string nameMovie,string genre, int rating);

	int GetRating();

	string GetStorageName();
	string GetStorageNameOut();
	string GetHeader();

	friend ifstream& operator>>(ifstream& fin, Movie&);
	friend ofstream& operator<<(ofstream& fout, Movie&);
	friend ostream& operator<<(ostream& out, Movie&);
	

};
#endif
