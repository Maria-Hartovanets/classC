#pragma once
#include"DoCinema.h"
#include "Couter.h"

#include <iostream>
#include <fstream>
using namespace std;


void SHOW_ALL_MENU()
{
	cout << "              WELCOME to the menu of cinema!\n" <<
		    "                Now we are ready to start! " << endl;

	DoCinema comand;

	bool temp = true, cycleOption = true;
	int choice = 0;
	
	comand.toSumUp();
	while (temp)
	{
		ShowMenu();
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			do
			{
				ShowMovieMenu();
				char op;
				cin >> op;
				if (op == 'A')
				{
					comand.Write("Movie");
				}
				else if (op == 'B')
				{
					comand.showPopularMovie();  /// 
				}
				else {
					cycleOption = false;
				}
			} while (cycleOption);
		}break;

		case 2:
		{
			cycleOption = true;
			do {
				ShowTicketMenu();
				char op1;
				cin >> op1;
				if (op1 == 'A')
				{
					comand.Write("Ticket");
				}
				else if (op1 == 'B')
				{
					comand.changeTicket();
				}
				else
				{
					cycleOption = false;
				}
			} while (cycleOption);
		}break;

		case 3:
		{
			cycleOption = true;
			do {
				ShowMenuHuman();
				int ch;
				cin >> ch;
				bool x = true, y = true;
				if (ch ==1)
				{
					while (x)
					{
						ShowActorMenu();
						char n;
						cin >> n;
						switch (n)
						{
						case 'A':
						{
							comand.showAllHuman();
						}break;
						case 'B':
						{
							string firstName;
							int rating, countOfMovie;
							cout << "Enter actor's name:\t";
							cin >> firstName;
							cout << "Enter rating:\t";
							cin >> rating;
							cout << "Enter count of movies:\t";
							cin >> countOfMovie;
							Actor actor(firstName, rating, countOfMovie);
							comand.addActor(actor);
							cout << "Your info was written sucessfully!" << endl;
						}break;
						case 'C':
						{
							x = false;
						}break;
						}
					}break;
				}

				if (ch ==2)
				{
					while (y)
					{
						ShowClientMenu();
						char n;
						cin >> n;
						switch (n)
						{
						case 'A':
						{

						}break;
						case 'B':
						{
							comand.addClient();
							cout << "Your info was written sucessfully!" << endl;
						}break;
						case 'C':
						{
							y = false;
						}break;
						}
					}
				}
			} while (cycleOption);
		}break;
		case 4:
		{
			temp = false;
		}break;
		default:
			cout << "Sorry!\nYou made a mistake in choosing an option!\nTRY AGAIN!\n";
		}
	}
}
