#ifndef DOCINEMA_H
#define DOCINEMA_H

#include "Cinema.h"
#include "Movie.h"
#include "Ticket.h"
//#include"Human.h"
#include"Actor.h"
#include "Client.h"
#include "ActorRepository.h"
#include "MainRepository.h"
#include "MovieRepository.h"
#include "TicketRepository.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DoCinema
{
	
public:

	/*vector <Movie> movieCommand;
	vector <Ticket> ticketCommand;*/
	~DoCinema() {}
	ActorRepository actorrep = ActorRepository(true);
	MovieRepository movierep = MovieRepository(true);
	TicketRepository ticketrep = TicketRepository(true);

	//vector <Cinema*> mTmp;
	vector <Cinema*> data;
	


	void addActor(Actor&actor);
	void addMovie(Movie& movie);
	void addTicket(Ticket& ticket);
	void addClient();

	void showAllHuman();
	void showClientFromFile();

	//void showRating();
	void changeTicket();
	void showPopularMovie();

    void toSumUp();
	void Write(string str);
	

};


#endif // !DOCINEMA_H
