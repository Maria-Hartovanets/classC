#include "Client.h"

Client::Client(string firstName,  string mov) :Human(firstName)
{
	this->mov = mov;
}

void Client::writeInfo()
{
	//cout << "\tClient's info:\n";
	cout << "\nFirst name: " << firstName <<
		"\nAdress: " << mov << endl;
}


string Client::strInfo()
{
	return firstName  + " " + mov + "\n";
}
