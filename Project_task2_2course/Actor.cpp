#include "Actor.h"

Actor::Actor(string firstName, string lastName, int age, int rating) :Human(firstName, lastName, age)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->rating = rating;
}

void Actor::writeInfo()
{
	cout << "\nFirst name: " << firstName << "\nLast name: " << lastName << "\nAge: "
		<< age << "\nRating: " << rating << endl;;
}

void Actor::changeRating()
{
	cout << "To change a rating: ";
	cin >> rating;
}

void Actor::addActor(string firstName, string lastName, int age, int rating)
{
	addHuman(firstName, lastName, age);
	this->rating = rating;
}

string Actor::strInfo()
{
	return firstName + " " + lastName + " " + to_string(age) +
		" " + to_string(rating) + "\n";
}