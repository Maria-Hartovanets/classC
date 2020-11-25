#ifndef TICKET_H
#define TICKET_H

#include "Cinema.h"

#include <iostream>
#include <string>
#include<fstream>
using namespace std;

class Ticket  : public Cinema
{
	/*    By the end of this project my class Ticket menas
		  more info of one movie      */
	string kindM;
	int price;
public:

	Ticket() {}
	Ticket(string nameMovie,string genre,int rating, int price, string kindM);

	 string GetStorageName();
	 string GetStorageNameOut();
	 string GetHeader();

	 string GetKindM();
	 int GetPrice();

	 void ChangeValue(int value);

	 friend ifstream& operator>>(ifstream& fin, Ticket&);
	 friend ofstream& operator<<(ofstream& fout, Ticket&);
	 friend ostream& operator<<(ostream& out, Ticket&);

	

};

#endif