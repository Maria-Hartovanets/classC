#ifndef MOVIEREPOSITORY_H
#define MOVIEREPOSITORY_H

#include <fstream>
#include "MainRepository.h"
#include "Movie.h"


class MovieRepository : public Repository
{
public:
	MovieRepository(bool data = false);

	~MovieRepository() {}

	void readFromFile();
	void writeToFile();

	bool Add(Movie& movie);

};

#endif
