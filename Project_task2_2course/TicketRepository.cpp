#include "TicketRepository.h"

TicketRepository::TicketRepository(bool data)
{
	readFromFile();
}

void TicketRepository::readFromFile()
{
	ifstream fileTicket("Ticket.txt");
	string nameMovie;
	int price, rating;
	string genre;
	string kindM;

	if (!fileTicket)          /////////////////////          Verify problem
	{
		cout << "Incorrect an option and name of file!";
		exit(1);
	}
	while (fileTicket)
	{
		if (fileTicket >>nameMovie >> genre>>rating >> price >> kindM)
		{
			Ticket* data = new Ticket(nameMovie, genre,rating, price, kindM);
			Add(*data);
		}
	}
	fileTicket.close();
}

void TicketRepository::writeToFile()
{
	ofstream fileTicket("Ticketout.txt", ios::out);
	for (int i = 0; i < temp.size(); i++) {
		fileTicket << ((Ticket*)temp[i])->strInfo();

	}

	fileTicket.close();
}

bool TicketRepository::Add(Ticket& ticket)
{
	return Repository::Add(&ticket);
}
