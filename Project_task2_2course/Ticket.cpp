#include "Ticket.h"

Ticket::Ticket(	string nameMovie,string genre,int rating, int price, string kindM) 
	:Cinema(nameMovie, genre, rating)
{
	this->kindM = kindM;
	this->price = price;
}


string Ticket::GetStorageName()
{
	return "Ticket.txt";
}

string Ticket::GetStorageNameOut()
{
	return "Ticketout.txt";
}

string Ticket::GetHeader()
{
	return "Ticket info:\n";
}

string Ticket::GetKindM()
{
	return kindM;
}

int Ticket::GetPrice()
{
	return price;
}

void Ticket::ChangeValue(int value)
{
	price = value;
}



ifstream& operator>>(ifstream& fin, Ticket& ticket)
{
	string nameMovie, genre, kindM;
		int rating, price;

	fin >> nameMovie>>genre >> rating >>price>>kindM;
	ticket.nameMovie = nameMovie;
	ticket.genre = genre;
	ticket.kindM = kindM;
	ticket.price = price;
	ticket.rating = rating;

	return fin;
}

ofstream& operator<<(ofstream& fout, Ticket& ticket)
{
	char pr = ' ';
	fout << ticket.nameMovie << pr
		<< ticket.genre << pr
		<< ticket.rating <<pr
		<< ticket.price <<pr
		<< ticket.kindM;
	return fout;
}

ostream& operator<<(ostream& out, Ticket& ticket)
{
	out << "Name of movie: " << ticket.nameMovie
		<< "\t|\tGenre: " << ticket.genre
		<< "\t|\tRating: " << ticket.rating
		<< "\t|\tPrice and kind of ticket: " << ticket.price 
		<< " & " << ticket.kindM;
	return out;
}
