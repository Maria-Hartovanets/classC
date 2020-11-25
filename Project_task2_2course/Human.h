#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>

using namespace std;

class Human {
protected:

	string homeTown;
	string firstName;
	
public:
	
	Human(string firstName, string homeTown) {
		this->homeTown = homeTown;
		this->firstName = firstName;
	};

};

#endif 



