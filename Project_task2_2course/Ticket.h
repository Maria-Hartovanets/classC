#ifndef TICKET_H
#define TICKET_H

#include "Movie.h"

#include <string>
#include <iostream>
using namespace std;

class Ticket  : public Cinema
{
	/*    By the end of this project my class Ticket menas
		  more info of one movie      */

public:
	string kindM;
	int price;

	Ticket(string nameMovie,string genre,int rating, int price, string kindM);

	 void writeInfo();

	 string strInfo();

};

#endif