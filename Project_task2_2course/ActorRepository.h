#ifndef ACTORREPOSITORY_H
#define ACTORREPOSITORY_H

#include <fstream>
#include "MainRepository.h"
#include "Actor.h"

class ActorRepository : public Repository 
{
public:
	ActorRepository(bool data = false);
	
	~ActorRepository(){}

	void readFromFile();
	void writeToFile();

	bool Add(Actor& actor);

};

#endif
