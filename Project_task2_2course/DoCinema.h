#ifndef DOCINEMA_H
#define DOCINEMA_H

#include "Cinema.h"
#include "Movie.h"
#include "Ticket.h"

//#include"Human.h"
#include"Actor.h"
#include "Client.h"

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DoCinema
{

public:
	///////////////////////////////////// CINEMA ///////////////////////////////////
	vector <Cinema> cinemaCommand;
	vector <Movie> movieCommand;
	vector <Ticket> ticketCommand;
	vector <Movie*> ticket;


	void writeToCinemaFile();
	void writeToMovieFile();
	void writeToTicketFile();

	void ShowFromTopRatingMovie();
	void writeToTicketFile1();
	//void sortByGenre();
	void ChangeTicket();
	void ShowTheOldestCinema();

	void write_cinema();
	void write_movie(vector <Movie*> movies);

	//////////////////////////////// HUMAN ///////////////////////////////////////////
	vector <Human*> clientCommand;
	vector <Human*> actorCommand;

	void writeToActorFile();
	void writeToClientFile();

	void write_actor();
	void write_client();

	void addActor();
	void addClient();
	void showAllInfoHuman(string str, vector <Human*> humans);

	void deleteClient(int index);
	void deleteActor(int index);
	void deleteTicketmemory(vector <Movie*> ticket);

	~DoCinema();

};


#endif // !DOCINEMA_H

