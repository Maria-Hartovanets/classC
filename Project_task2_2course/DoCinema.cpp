#include "DoCinema.h"
#include "Ticket.h"
#include "Cinema.h"

#include <iostream>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <string>




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

void DoCinema::addClient()
{
	string nameMovie;
	cout << "Write the name of movie you wanna see:\t";
	cin >> nameMovie;
	toSumUp();
	
	for (int i = 0; i < movierep.GetTemp().size(); i++) {
		if (((Movie*)movierep.GetTemp()[i])->GetName() == nameMovie) {
			movierep.GetTemp().erase(movierep.GetTemp().begin() + i);
			movierep.deleteIndex(i);
		}
	}

	ofstream fileClient("Client.txt", ios::app);
	string firstName, movie;
	cout << "Input your name:\t";
	cin >> firstName;
	Client temp(firstName, nameMovie);
	fileClient << firstName << " " << nameMovie;
	cout << "\nClient: " << firstName << " want to see: " << nameMovie << endl;

	fileClient.close();
}

//void DoCinema::showRating()
//{
//	int index = 0;
//	int max = ((Movie*)movierep.GetTemp()[0])->GetRating();
//	
//	for (int i = 1; i < movierep.GetTemp().size(); i++) {
//		if (max < ((Movie*)movierep.GetTemp()[i])->GetRating()) {
//			max = ((Movie*)movierep.GetTemp()[i])->GetRating();
//			index = i;
//		}
//	}
//	cout << "Result of the most popular movies:\n";
//	(movierep.GetTemp()[index])->writeInfo();
//	
//}

void DoCinema::changeTicket()
{
	cout << "Input the kind of ticket to change the price:\t";
	string kindM;
	int newPrice = 0;
	cin >> kindM;
	for (int i = 0; i < ticketrep.GetTemp().size(); i++)
	{
		if (((Ticket*)ticketrep.GetTemp()[i])->kindM==kindM ) {
			cout << "Input new price: ";
			cin >> newPrice;
			((Ticket*)ticketrep.GetTemp()[i])->price = newPrice;
		}
		
	}
}

void DoCinema::showPopularMovie()
{
	int max = ((Movie*)movierep.GetTemp()[0])->GetRating();
	int index = 0;
	for (int i = 0; i < movierep.GetTemp().size(); i++) {
		if (max < ((Movie*)movierep.GetTemp()[i])->GetRating()) {
			max = ((Movie*)movierep.GetTemp()[i])->GetRating();
			index = i;
		}
	}
	cout << "Result of the most popular movies:\n";
	(movierep.GetTemp()[index])->writeInfo();
}


void DoCinema::showAllHuman()
{
	for (int i = 0; i < actorrep.GetTemp().size(); i++) {
		(actorrep.GetTemp()[i])->writeInfo();
		//cout << "\n";
		//data[i]->writeInfo();
	}
}

void DoCinema::showClientFromFile()
{
	
}

void DoCinema::toSumUp()
{
	data.clear();

	for (int i = 0; i < movierep.GetTemp().size(); i++) 
	{
		data.push_back((Movie*)movierep.GetTemp()[i]);
	}
	for (int i = 0; i < ticketrep.GetTemp().size(); i++) 
	{
		data.push_back((Ticket*)ticketrep.GetTemp()[i]);
	}
}

void DoCinema::Write(string str)
{
	toSumUp();
	if (str == "Movie") {
		cout << "  Info of " << str << ": " << endl;
		for (int i = 0; i < movierep.GetTemp().size(); i++)
		{
			(movierep.GetTemp()[i])->writeInfo();
		}
	}
	else if (str == "Ticket") {
		cout << "  Info of " << str << ": " << endl;
		for (int i = 0; i < ticketrep.GetTemp().size(); i++)
		{
			(ticketrep.GetTemp()[i])->writeInfo();
		}
	}
}


