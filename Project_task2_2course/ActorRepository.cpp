#include "ActorRepository.h"

ActorRepository::ActorRepository(bool data):Repository(data)
{
	readFromFile();
}

void ActorRepository::readFromFile()
{
    ifstream fileActor("Actor.txt");
    string firstName;
    int rating;
    int countOfMovies;
    if (!fileActor)
    {
        throw("Error: Actor.txt not found");

    }

   while (fileActor) {
        if (fileActor >> firstName >>  rating>>countOfMovies)
        {
            Actor* data = new Actor(firstName,  rating, countOfMovies);
            Add(*data);
        }
    }
    fileActor.close();
}

void ActorRepository::writeToFile()
{
    ofstream fileActor("Actorout.txt", ios::out);
    if (!fileActor)
    {
        throw("Error: Actorout.txt not found");

    }
    else {
        for (int i = 0; i < temp.size(); i++) {
            fileActor << ((Actor*)temp[i])->strInfo();
        }
    }
    fileActor.close();

}

bool ActorRepository::Add(Actor& actor)
{
    return Repository::Add(&actor);
}

