#ifndef ACTOR_H
#define ACTOR_H

#include <iostream>
#include <string>
#include "Human.h"
#include "Client.h"
using namespace std;

class Actor :public Human {

	int countOfMovies;

public:

	int rating;

	Actor(string = "", int = 0, int =0);

	string strInfo();

	void writeInfo();
};

#endif


