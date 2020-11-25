#ifndef DOCINEMA_H
#define DOCINEMA_H

#include "../Project_task2_2course/Cinema.h"
#include "../Project_task2_2course/Movie.h"
#include "../Project_task2_2course/Ticket.h"
#include"../Project_task2_2course/Actor.h"
#include "../Project_task2_2course/Client.h"
#include "../Project_task2_2course/MainRepository.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DoCinema
{

public:

	
	~DoCinema() {}
	Repository<Actor> actorrep = Repository<Actor>(true);
	Repository<Movie> movierep = Repository<Movie>(true);
	Repository<Ticket> ticketrep = Repository<Ticket>(true);
	Repository<Client> clientrep = Repository<Client>(true);
	
	void addClient(Client& client);


	void showRatingActor();
	//void changeTicket();
	void showPopularMovie();

	void Write(string str);


};


#endif // !DOCINEMA_H