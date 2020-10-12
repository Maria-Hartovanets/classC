#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
using namespace std;

class Human {
protected:

	string firstName;
	string lastName;
	int age;

public:

	Human(string = "", string = "", int = 0);

	virtual void writeInfo();

	void addHuman(string firstName, string lastName, int age);

};

#endif 