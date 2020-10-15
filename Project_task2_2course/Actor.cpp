#include "Actor.h"

Actor::Actor(string firstName, int rating, int countOfMovies) :Human(firstName)
{
	this->countOfMovies = countOfMovies;
	this->rating = rating;
}

void Actor::writeInfo()
{
	//cout << "\t Actor's info:\n";
	cout << "\nFirst name: " << firstName << "\nRating: " << rating
		<< "\nCount of movies:" << countOfMovies << "\nHomeTown: " << homeTown 
		<< endl;
}

string Actor::strInfo()
{
	return firstName  +" " + to_string(rating) 
		+ " "+to_string(countOfMovies)+"\n";
}