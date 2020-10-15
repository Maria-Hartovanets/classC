#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include <string>
#include "Temp.h"
using namespace std;

class Human: public Temp {
protected:

	string homeTown;
	
public:
	string firstName;

	Human(string firstName) {
		this->homeTown = "Kyiv";
		this->firstName = firstName;
	};

};

#endif 



