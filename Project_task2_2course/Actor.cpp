#include "Actor.h"

Actor::Actor(string firstName, int rating, int countOfMovies, string homeTown) :Human(firstName,homeTown)
{
	this->countOfMovies = countOfMovies;
	this->rating = rating;
}


string Actor::GetStorageName()
{
	return "Actor.txt";
}

string Actor::GetStorageNameOut()
{
	return "Actorout.txt";
}

string Actor::GetHeader()
{
	return "Actor info:\n";
}

int Actor::GetRating()
{
	return rating;
}


ifstream& operator>>(ifstream& fin, Actor& actor)
{
	string firstName, homeTown;
	int rating, countOfMovies;
	
	fin >> firstName >> rating >> countOfMovies >> homeTown;
	actor.firstName = firstName;
	actor.rating = rating;
	actor.countOfMovies = countOfMovies;
	actor.homeTown = homeTown;

		return fin;
}

ofstream& operator<<(ofstream& fout, Actor& actor)
{
	char pr = ' ';
	fout << actor.firstName <<pr
		<< actor.rating <<pr
		<< actor.countOfMovies <<pr
		<< actor.homeTown;
	return fout;
}

ostream& operator<<(ostream& out, Actor& actor)
{
	out << "Name: "<<actor.firstName 
		<< "\t|\tRating: "<< actor.rating
		<< "\t|\tCount of movies: "<< actor.countOfMovies 
		<< "\t|\tHomeTowm: " << actor.homeTown;
	return out;
}
