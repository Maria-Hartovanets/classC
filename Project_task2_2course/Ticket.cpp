#include "Ticket.h"

Ticket::Ticket(	string nameMovie,string genre,int rating, int price, string kindM) 
	:Cinema(nameMovie, genre, rating)
{
	
	this->kindM = kindM;
	this->price = price;
}


string Ticket::strInfo()
{
	return nameMovie+" " + genre + " " 
		+ to_string(price) + " " + kindM + "\n";
}

void Ticket::writeInfo() {
	//cout << "\tAll info of ticket:\n";
	cout << "Name movie: " << nameMovie <</*<< "\nLocation and year: " << place << " "
		<< year << */"\ngenre: " << genre << "\ntype and rating:"
		<< kindM << " and " << rating <<"\nprice: "<<price<< endl<<endl;
}