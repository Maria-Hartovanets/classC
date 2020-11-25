#pragma once
#include"CommandU.h"
#include <iostream>
#include <fstream>
using namespace std;

void ShowMenu() {

	cout << "\n\t\t\t\t\tGeneral setting:" << endl;
	cout << "\t\t\t\t1. All movies." << endl;
	cout << "\t\t\t\t2. Tickets of movies." << endl;
	cout << "\t\t\t\t3. Make an order(to buy tickets)." << endl;
	cout << "\t\t\t\t4. Actors in the cinema." << endl;
	cout << "\t\t\t\t5. To finish the programm." << endl;
	cout << "Your choice:";
}

void ShowMovieMenu() {
	cout << "\n\t\t\t\t\tMovie setting:";
	cout << "\n\t\t\t\tA. Show infomation of all movies." << endl;
	cout << "\t\t\t\tB. Show the most popular movie." << endl;
	cout << "\t\t\t\tC. Back." << endl;
}


void ShowTicketMenu() {
	cout << "\n\t\t\t\t\tTicket setting:";
	cout << "\n\t\t\t\tA. Show more(w/ price) infomation of all movies." << endl;
	cout << "\t\t\t\tB. Back." << endl;
}



void SHOW_ALL_MENU()
{
	cout << "\t\t\t\t\tDear Sir/Madam,\n"
		 << "\t\t\t\tWELCOME to the menu of cinema!\n" <<
		    "\t\t\t\t  Now we are ready to start! " << endl;

	DoCinema comand;

	bool temp = true, cycleOption = true;
	int choice = 0;

	//comand.toSumUp();
	while (temp)
	{
		ShowMenu();
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			system("cls");
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
					cout << "Result of the most popular movies:\n";
					comand.showPopularMovie();  /// 
				}
				else {
					system("cls");
					cycleOption = false;
				}
			} while (cycleOption);
		}break;

		case 2:
		{
			system("cls");
			cycleOption = true;
			do {
				ShowTicketMenu();
				char op1;
				cin >> op1;
				if (op1 == 'A')
				{
					comand.Write("Ticket");
				}
				else
				{
					system("cls");
					cycleOption = false;
				}
			} while (cycleOption);
		}break;

		case 3:
		{
			system("cls");
			cycleOption = true;
			do {
				string firstName, movie, homeTown1;
				cout << "Enter your name:\t";
				cin >> firstName;
				cout << "Enter the movie you wanna see:\t";
				cin >> movie;
				cout << "Enter hometown:\t";
				cin >> homeTown1;
				Client client(firstName, movie, homeTown1);
				comand.addClient(client);
				cout << "\nYour info was written sucessfully!" << endl;

				string answer;
				cout << "\t\tIf you want to buy one more ticket please enter 'more'\n"
					<< "\t\t   in another way enter 'nope': ";
				cin >> answer;

				if (answer == "more") {
					string firstName1, movie1;
					cout << "Enter your name:\t";
					cin >> firstName1;
					cout << "Enter the movie you wanna see:\t";
					cin >> movie1;
					Client client1(firstName1, movie1);
					comand.addClient(client1);
					cout << "Your info was written sucessfully!" << endl;
				}
				else { 
					system("cls"); 
					cycleOption = false; 
					
				}
			} while (cycleOption);
		}break;
		case 4: {
			system("cls");
			comand.Write("Actor");
			system("pause");
			system("cls");
		}break;
		case 5:
		{
			temp = false;
		}break;
		default:
			cout << "Sorry!\nYou made a mistake in choosing an option!\nTRY AGAIN!\n";
		}
	}
}