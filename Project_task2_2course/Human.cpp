#include "Human.h"

Human::Human(string firstName, string lastName, int age)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	if (age < 0) { throw ("Error:\nAge!"); }
}

void Human::writeInfo()
{
	cout << "First name:\t" << firstName << "\nLast name:\t" << lastName << "\nAge:\t" << age << endl;
}

void Human::addHuman(string firstName, string lastName, int age)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
}
