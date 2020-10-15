#ifndef TICKETREPOSITORY_H
#define TICKETREPOSITORY_H

#include <fstream>
#include "MainRepository.h"
#include "Ticket.h"


class TicketRepository : public Repository
{
public:
	TicketRepository(bool data = false);

	~TicketRepository() {}

	void readFromFile();
	void writeToFile();

	bool Add(Ticket& ticket);

};

#endif
