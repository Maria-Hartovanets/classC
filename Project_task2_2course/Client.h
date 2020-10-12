#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

class Client :public Human {
public:
	string homeTown;

	Client(string = "", string = "", int = 0, string = "");

	virtual void writeInfo();

	void changeTown();
	void addClient(string firstName, string lastName, int age, int rating);

	string strInfo();

};

#endif