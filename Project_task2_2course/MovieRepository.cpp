#include "MovieRepository.h"
#include <iostream>

MovieRepository::MovieRepository(bool data)
{
	readFromFile();
}

void MovieRepository::readFromFile()
{

	ifstream fileMovie("Movie.txt");
	string nameMovie;
	int rating;
	string genre;

	if (!fileMovie)          /////////////////////          Verify problem
	{
		std::cout << "Incorrect an option and name of file!";
		exit(1);
	}
	while (fileMovie)
	{
		if (fileMovie >> nameMovie >> rating >> genre)
		{
			Movie* data = new Movie(nameMovie, genre, rating);
			Add(*data);
		}
	}
	fileMovie.close();
}

void MovieRepository::writeToFile()
{
	ofstream fileMovie("Movieout.txt", ios::out);
	if (!fileMovie)
	{
		throw("Error: Movieout.txt not found");

	}
	else {
		for (int i = 0; i < temp.size(); i++) {
			fileMovie << ((Movie*)temp[i])->strInfo();

		}
	}
	fileMovie.close();
}

bool MovieRepository::Add(Movie& movie)
{
	return Repository::Add(&movie);
}
