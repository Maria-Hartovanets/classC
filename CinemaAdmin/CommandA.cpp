#include "CommandA.h"


void DoCinema::addActor(Actor& actor)
{
	actorrep.Add(actor);
}

void DoCinema::addMovie(Movie& movie)
{
	movierep.Add(movie);
}

void DoCinema::addTicket(Ticket& ticket)
{
	ticketrep.Add(ticket);
}

void DoCinema::addClient(Client& client)
{
	clientrep.Add(client);
}


void DoCinema::changeTicket()
{
	
	string kindM;
	cin >> kindM;
	for (int i = 0; i < ticketrep.GetCurrent(); i++)
	{
		if (ticketrep[i].GetKindM()==kindM) {
			int newPrice=0;
			cout << "Input new price: ";
			cin >> newPrice;
			ticketrep[i].ChangeValue(newPrice);
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




//void DoCinema::toSumUp()
//{
//	data.clear();
//
//	for (int i = 0; i < movierep.GetTemp().size(); i++)
//	{
//		data.push_back((Movie*)movierep.GetTemp()[i]);
//	}
//	for (int i = 0; i < ticketrep.GetTemp().size(); i++)
//	{
//		data.push_back((Ticket*)ticketrep.GetTemp()[i]);
//	}
//}

void DoCinema::Write(string str)
{
	//toSumUp();
	if (str == "Movie") {
		movierep.writeToConsole();
	}
	else if (str == "Ticket") {
		ticketrep.writeToConsole();
	}
	else if (str == "Actor") {
		actorrep.writeToConsole();
	}
	else if (str == "Client") {
		clientrep.writeToConsole();
	}
}


