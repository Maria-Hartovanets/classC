#include "CommandU.h"



void DoCinema::addClient(Client& client)
{
	clientrep.Add(client);
}


void DoCinema::showRatingActor()
{
	int max = actorrep[0].GetRating();
	int index = 0;
	for (int i = 0; i < actorrep.GetCurrent(); i++) {
		if (max < actorrep[i].GetRating()) {
			max = actorrep[i].GetRating();
			index = 1;
		}
	}
}

void DoCinema::showPopularMovie()
{                      
	int max = -1;
	int index = 0;
	for (int i = 0; i <= movierep.GetCurrent(); i++) {
		if (movierep[i].GetRating() > max) {
			max = movierep[i].GetRating();
			index = i;
		}
	}
	std::cout << "---------------------------------------------"
		<< "----------------------------------------------"
		<< "--------------------------\n";
	cout << movierep[index];
	std::cout << "\n---------------------------------------------"
		<< "----------------------------------------------"
		<< "--------------------------\n";
}



void DoCinema::Write(string str)
{
	if (str == "Movie") {
		movierep.writeToConsole();
	}
	else if (str == "Ticket") {
		ticketrep.writeToConsole();
	}
	else if (str == "Actor") {
		actorrep.writeToConsole();
	}
	
}


