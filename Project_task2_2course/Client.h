#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <string>
#include<fstream>
#include "Human.h"
using namespace std;

class Client :public Human {
	string mov;
public:

	Client(string = "", string = "", string ="");


	string GetStorageName();
	string GetStorageNameOut();
	string GetHeader();

	friend ifstream& operator>>(ifstream& fin, Client&);
	friend ofstream& operator<<(ofstream& fout, Client&);
	friend ostream& operator<<(ostream& out, Client&);


};

#endif

