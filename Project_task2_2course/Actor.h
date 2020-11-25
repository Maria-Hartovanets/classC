#ifndef ACTOR_H
#define ACTOR_H

#include <iostream>
#include <string>
#include<fstream>
#include "Human.h"
using namespace std;

class Actor :public Human {

	int countOfMovies;
	int rating;
public:


	Actor(string = "", int = 0, int =0, string ="");

	string GetStorageName();
	string GetStorageNameOut();
	string GetHeader();

	int GetRating();

	friend ifstream& operator>>(ifstream& fin, Actor& );
	friend ofstream& operator<<(ofstream& fout, Actor& );
	friend ostream& operator<<(ostream& out, Actor& );
};

#endif


