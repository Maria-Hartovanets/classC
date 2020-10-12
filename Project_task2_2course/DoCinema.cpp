#include "DoCinema.h"
#include "Cinema.h"
#include "Movie.h"
#include "Ticket.h"
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <string>


////////////////////////////////////////////////////////////// CINEMA ///////////////////////////////////////
void DoCinema::writeToCinemaFile()
{
	ifstream fileCinema("Cinema.txt");
	string nameBuild;
	string place;
	int year;

	if (!fileCinema)          /////////////////////          Verify problem
	{
		cout << "Incorrect an option and name of file!";
		exit(1);
	}
	while (fileCinema)
	{
		if (fileCinema >> nameBuild >> place >> year)
		{
			Cinema cin;
			cin.InfoCinema(nameBuild, place, year);
			cinemaCommand.push_back(cin);

		}
	}
	fileCinema.close();
}

void DoCinema::writeToMovieFile()
{
	ifstream fileMovie("Movie.txt");
	string nameMovie;
	int rating;
	string genre;

	if (!fileMovie)          /////////////////////          Verify problem
	{
		cout << "Incorrect an option and name of file!";
		exit(1);
	}
	while (fileMovie)
	{
		if (fileMovie >> nameMovie >> rating >> genre)
		{
			Movie mov;
			mov.InfoMovie(nameMovie, genre, rating);
			movieCommand.push_back(mov);
			/*Movie* temp = new Movie(nameMovie, rating, genre);
			movieCommand.push_back(temp);*/
		}
	}
	fileMovie.close();
}

void DoCinema::writeToTicketFile1()
{
	ifstream fileTicket("Ticket.txt");
	string nameMovie;
	int rating;
	string genre;
	int price;
	string kindM;

	if (!fileTicket)          /////////////////////          Verify problem
	{
		cout << "Incorrect an option and name of file!";
		exit(1);
	}
	while (fileTicket)
	{
		if (fileTicket >> nameMovie >> rating >> genre >> price >> kindM)
		{
			Ticket t;
			t.InfoTicket(nameMovie, genre, rating, price, kindM);
			ticketCommand.push_back(t);
		}
	}
	fileTicket.close();
}

void DoCinema::writeToTicketFile()
{
	ifstream fileTicket("Ticket.txt");
	string nameMovie;
	int rating;
	string genre;
	int price;
	string kindM;

	if (!fileTicket)          /////////////////////          Verify problem
	{
		cout << "Incorrect an option and name of file!";
		exit(1);
	}
	while (fileTicket)
	{
		if (fileTicket >> nameMovie >> rating >> genre >> price >> kindM)
		{
			/*Ticket t;
			t.InfoTicket( nameMovie, genre,rating, price, kindM);
			ticketCommand.push_back(t);*/
			Ticket* temp = new Ticket(nameMovie, rating, genre, price, kindM);
			ticket.push_back(temp);
		}
	}
	fileTicket.close();
}



void DoCinema::write_movie(vector <Movie*> movie)
{
	cout << "     Full Movie Info:" << endl;
	//cout << "        \t" << str << "\n";
	for (int i = 0; i < movie.size(); i++) {
		movie[i]->writeInfoC();
		cout << "\n";
	}

}



void DoCinema::write_cinema()
{
	for (int i = 0; i < cinemaCommand.size(); i++)
	{
		cinemaCommand[i].WriteCinema();

		cout << endl;
	}
}

void DoCinema::ShowFromTopRatingMovie()
{
	writeToMovieFile();
	int size = movieCommand.size();
	int* mas = new int[size];
	int temp = 0;
	for (int k = 1; k < movieCommand.size(); k++)
	{
		for (int i = 0; i < (movieCommand.size() - k); i++) {
			if (movieCommand[i].rating < movieCommand[i + 1].rating)
			{
				temp = movieCommand[i].rating;
				movieCommand[i].rating = movieCommand[i + 1].rating;
				movieCommand[i + 1].rating = temp;
			}

		}
	}
	cout << "Result:" << endl;
	for (int i = 0; i < movieCommand.size(); i++) {
		cout << movieCommand[i].rating << endl;
		movieCommand[i].Info();
		cout << endl;
	}
}

/*void DoCinema::sortByGenre()
{
	for (int i = 0; i < movieCommand.size(); i++)
	{
		for (int j = i + 1; j < movieCommand.size(); j++)
		{
			if (strcmp(movieCommand[i].genre, movieCommand[j].genre))
			{
				swap(movieCommand[i].genre,movieCommand[j].genre);

			}
		}
	}
}*/

void DoCinema::ChangeTicket()
{
	cout << "Input the kind od ticket to change the price:\t";
	string kind;
	int newPrice = 0;
	cin >> kind;
	for (int i = 0; i < ticketCommand.size(); i++)
	{
		if (ticketCommand[i].kindM == kind) {
			cout << "Input new price: ";
			cin >> newPrice;
			ticketCommand[i].price = newPrice;
		}
	}
}

void DoCinema::ShowTheOldestCinema()
{
	int indexOfTheOldestCinema = cinemaCommand[0].year;
	int indexOfYear = 0;
	for (int i = 0; i < cinemaCommand.size(); ++i)
	{
		if (indexOfTheOldestCinema > cinemaCommand[i].year)
		{
			indexOfTheOldestCinema = cinemaCommand[i].year;
			indexOfYear = i;
		}
	}
	cout << "The oldest cinema in list:\n";
	cinemaCommand[indexOfYear].WriteCinema();
}


/////////////////////////////////////////////////////////////// HUMAN /////////////////////////////////////////
void DoCinema::writeToActorFile()
{
	ifstream fileActor("Actor.txt");
	string firstName;
	string lastName;
	int age;
	int rating;
	if (!fileActor)
	{
		throw("Error: Actor.txt not found");

	}

	for (int i = 0; fileActor; i++) {
		if (fileActor >> firstName >> lastName >> age >> rating)
		{
			Actor* data = new Actor(firstName, lastName, age, rating);
			/*tmp.addActor(firstName, lastName, age, rating);*/
			actorCommand.push_back(data);// delete actorCommand[i] 
		}
	}

	if (actorCommand.size() == 0) {
		cout << "File Actor.txt is empty" << endl;
		system("Pause");
	}

	fileActor.close();
}

void DoCinema::writeToClientFile()
{


	ifstream fileClient("Client.txt");
	string firstName;
	string lastName;
	int age;
	string adress;
	if (!fileClient)
	{
		throw("Error: Actor.txt not found");

	}

	for (int i = 0; fileClient; i++) {
		if (fileClient >> firstName >> lastName >> age >> adress)
		{
			Client* data = new Client(firstName, lastName, age, adress);
			clientCommand.push_back(data);// delete clientCommand[i] 
		}
	}

	fileClient.close();
}

void DoCinema::write_actor()
{
	ofstream fileActor("Actor.txt", ios::out);
	if (!fileActor)
	{
		throw("Error: Actor.txt not found");

	}
	else {
		for (int i = 0; i < actorCommand.size(); i++) {
			fileActor << ((Actor*)actorCommand[i])->strInfo() << endl;
		}
	}
	fileActor.close();

}

void DoCinema::write_client()
{
	ofstream fileClient("Client.txt", ios::out);
	if (!fileClient)
	{
		throw("Error: Client.txt not found");

	}
	else {
		for (int i = 0; i < actorCommand.size(); i++) {
			fileClient << ((Client*)clientCommand[i])->strInfo() << endl;

		}
	}
	fileClient.close();
}

void DoCinema::addActor()
{
	ofstream fileActor("Actor.txt", ios::app);
	string firstName;
	string lastName;
	int age;
	int rating;

	cout << "Enter first name and last name:  ";
	cin >> firstName >> lastName;
	cout << "Enter age and rating: ";
	cin >> age >> rating;
	Actor* temp = new Actor(firstName, lastName, age, rating);
	actorCommand.push_back(temp);

	fileActor << ((Actor*)actorCommand[actorCommand.size() - 1])->strInfo();
	fileActor.close();

}

void DoCinema::addClient()
{
	ofstream fileActor("Client.txt", ios::app);
	string firstName;
	string lastName;
	int age;
	string adress;

	cout << "Enter first name and last name:  ";
	cin >> firstName >> lastName;
	cout << "Enter age and adress: ";
	cin >> age >> adress;
	Client* temp = new Client(firstName, lastName, age, adress);
	clientCommand.push_back(temp);

	fileActor << ((Client*)clientCommand[clientCommand.size() - 1])->strInfo();
	fileActor.close();
}

void DoCinema::showAllInfoHuman(string str, vector <Human*> humans)
{
	cout << "        \t" << str << "\n";
	for (int i = 0; i < humans.size(); i++) {
		humans[i]->writeInfo();
		//cout << "\n";
	}
}

void DoCinema::deleteClient(int index)
{
	delete clientCommand[index];
	clientCommand.erase(clientCommand.begin() + index);
	write_client();

}

void DoCinema::deleteActor(int index)
{
	delete actorCommand[index];
	actorCommand.erase(actorCommand.begin() + index);
	//write_actor();
}

void DoCinema::deleteTicketmemory(vector<Movie*> ticket)
{
	for (int i = 0; i < ticket.size(); i++) {
		delete[] ticket[i];
	}
}

DoCinema::~DoCinema()
{

	for (int i = 0; i < actorCommand.size(); i++) {
		//cout << "Destroyed!!!!!";
		delete[] actorCommand[i];
	}
	for (int i = 0; i < clientCommand.size(); i++) {
		//cout << "Destroyeeeeeeeeeeeeeeeeeeeeeeeeeeeed!!!!!";
		delete[] clientCommand[i];
	}
	for (int i = 0; i < ticket.size(); i++) {
		delete[] ticket[i];
	}
}