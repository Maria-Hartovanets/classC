#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include "Human.h"
using namespace std;

class Client :public Human {
	string mov;
public:

	Client(string = "", string = "");

	void writeInfo();

	string strInfo();


};

#endif

