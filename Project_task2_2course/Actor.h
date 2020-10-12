#ifndef ACTOR_H
#define ACTOR_H

#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

class Actor :public Human {
public:
	int rating;

	Actor(string = "", string = "", int = 0, int = 0);

	virtual void writeInfo();

	void changeRating();
	void addActor(string firstName, string lastName, int age, int rating);

	string strInfo();

};

#endif