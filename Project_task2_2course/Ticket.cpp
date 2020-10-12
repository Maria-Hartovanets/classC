#include "Ticket.h"

Ticket::Ticket(string nameMovie, int rating, string genre, int price, string kindM)
	:Movie(nameMovie, rating, genre)
{
	this->nameMovie = nameMovie;
	this->genre = genre;
	this->rating = rating;
	this->price = price;
	this->kindM = kindM;
}

void Ticket::InfoTicket(string nameMovie, string genre, int rating, int price, string kindM)
{
	this->nameMovie = nameMovie;
	this->genre = genre;
	this->rating = rating;
	this->price = price;
	this->kindM = kindM;

}

string Ticket::strInfo()
{
	return "\nName Movie: " + nameMovie + "\nGenre: " + genre + "\nRating: " + to_string(rating) +
		"\nPrice: " + to_string(price) + "\nKind of movie: " + kindM + "\n";
}

void Ticket::writeInfoC() {

	cout << "Name: " << nameMovie << "\ngenre: " << genre << " \nrating:" << rating
		<< "\nPrice of a ticket:" << price << "\nkind of ticket:" << kindM << endl;
}