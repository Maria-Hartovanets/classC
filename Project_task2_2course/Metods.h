#pragma once
#include"DoCinema.h"
#include "Couter.h"

#include <iostream>
using namespace std;


void SHOW_ALL_MENU()
{
	DoCinema doing, d;
	doing.writeToCinemaFile();
	doing.writeToMovieFile();
	doing.writeToTicketFile();


	cout << "              WELCOME to the menu of cinemas!\n                 Please choose your option: " << endl;
	//ShowMenu();

	bool temp = true;
	while (temp) {
		ShowMenu();
		int choice;
		cin >> choice;

		switch (choice)
		{

		case 1:
		{
			while (true) {
				ShowCinemaMenu();
				char option;
				cin >> option;
				if (option == 'A')
				{
					doing.write_cinema();
				}
				else if (option == 'B')
				{
					doing.ShowTheOldestCinema();
				}
				else if (option == 'C')
				{
					//ShowMenu();
					break;

				}

				else
				{
					throw "Error!\t Incorrect option!";   /////////////////////          Verify problem
					break;
				}
			}
		}break;

		case 2:
		{
			while (true)
			{
				ShowMovieMenu();
				d.writeToMovieFile();
				char option1;
				cin >> option1;
				if (option1 == 'A')
				{
					doing.write_movie(doing.ticket);
					//doing.deleteTicketmemory(doing.ticket);
				}
				else if (option1 == 'B')
				{
					d.ShowFromTopRatingMovie();
				}
				else {
					break;
				}
			}
		}break;

		case 3:
		{
			while (true)
			{
				ShowTicketMenu();
				char option2;
				cin >> option2;
				if (option2 == 'A')
				{
					doing.ChangeTicket();
				}
				else {
					break;
				}
			}

		}break;
		case 4:
		{
			doing.writeToActorFile();
			doing.writeToClientFile();
			bool t = true;
			ShowMenuHuman();
			int op;
			cin >> op;
			switch (op) {
			case 1: {
				while (true)
				{
					ShowActorMenu();
					char option1;
					cin >> option1;
					if (option1 == 'A')
					{

						doing.showAllInfoHuman("Actors", doing.actorCommand);

					}
					else if (option1 == 'B')
					{
						//doing.writeToActorFile();
						doing.addActor();
						cout << "An actor has been added successfully!\n";
					}
					else if (option1 == 'C')
					{
						int index;
						cout << "Enter the index actor to delete: ";
						cin >> index;
						doing.deleteActor(index);
						cout << "An actor has been deleted successfully!\n";
					}
					else if (option1 == 'D')
					{
						int newrat;
						cout << "Choose actor to  change rating: ";
						cin >> newrat;
						((Actor*)doing.actorCommand[newrat - 1])->changeRating();
						cout << "An actor's rating has been changed successfully!\n";
					}
					else {
						break;
					}
				}
			}break;
			case 2: {
				while (true)
				{
					ShowClientMenu();
					char option1;
					cin >> option1;
					if (option1 == 'A')
					{
						doing.showAllInfoHuman("Clients", doing.clientCommand);
					}
					else if (option1 == 'B')
					{
						doing.addClient();
						cout << "A client has been added successfully!\n";
					}
					else if (option1 == 'C')
					{
						int index;
						cout << "Enter the index client to delete: ";
						cin >> index;
						doing.deleteActor(index);
						cout << "A client has been deleted successfully!\n";

					}
					else if (option1 == 'D')
					{
						short home;
						cout << "Choose client to  change hometown: ";
						cin >> home;
						((Client*)doing.clientCommand[home - 1])->changeTown();
						cout << "A client's home has been changed successfully!\n";
					}
					else {
						break;
					}
				}
			}
			}


		}break;
		case 5:
		{
			temp = false;
			break;
		}break;

		default:
			cout << "Sorry!\nYou made a mistake in choosing an option!\nTRY AGAIN!\n";
		}
	}
}