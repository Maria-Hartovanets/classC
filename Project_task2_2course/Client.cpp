#include "Client.h"

Client::Client(string firstName, string lastName, int age, string homeTown) :Human(firstName, lastName, age)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->homeTown = homeTown;
}

void Client::writeInfo()
{
	cout << "\nFirst name: " << firstName << "\nLast name: " << lastName << "\nAge: "
		<< age << "\nAdress: " << homeTown << endl;
}

void Client::changeTown()
{
	cout << "To change a place:\t";
	cin >> homeTown;
}

void Client::addClient(string firstName, string lastName, int age, int rating)
{
	addHuman(firstName, lastName, age);
	this->homeTown = homeTown;
}

string Client::strInfo()
{
	return firstName + " " + lastName + " " + to_string(age) +
		" " + homeTown + "\n";
}
