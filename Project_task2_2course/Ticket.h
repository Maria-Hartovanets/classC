#ifndef TICKET_H
#define TICKET_H

#include "Movie.h"

#include <string>
#include <iostream>
using namespace std;

class Ticket : public Movie
{
public:
	string nameMovie;
	string genre;
	int rating;
	int price;
	string kindM;

	Ticket(string = "", int = 0, string = "", int = 0, string = "");

	void InfoTicket(string nameMovie, string genre, int rating, int price, string kindM);

	string strInfo();

	virtual void writeInfoC();

};

#endif