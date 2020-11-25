#pragma once
#include"CommandA.h"
#include <iostream>
#include <fstream>
using namespace std;

void ShowMenu() {

	cout << "\n\t\t\t\t1. Do actions with movies." << endl;
	cout << "\t\t\t\t2. Do actions with ticket." << endl;
	cout << "\t\t\t\t3. !NEW! Show 'menu of humans'." << endl;
	cout << "\t\t\t\t4. To finish the programm." << endl;
	cout << "Your choice:";
}

void ShowMovieMenu() {
	cout << "\n\t\t\t\t\t\tMovie setting:";
	cout << "\n\t\t\t\tA. Show infomation of all movies." << endl;
	cout << "\t\t\t\tB. Show the most popular movie." << endl;
	cout << "\t\t\t\tC. Back." << endl;
}


void ShowTicketMenu() {
	cout << "\n\t\t\t\t\t\tTicket setting:";
	cout << "\n\t\t\t\tA. Show more(w/ price) infomation of all movies." << endl;
	cout << "\t\t\t\tB. Change ticket of movie." << endl;
	cout << "\t\t\t\tC. Back." << endl;
}

void ShowMenuHuman() {
	cout << "\n\t\t\t\t\t\tHuman setting:";
	cout << "\n\t\t\t\t1. Do actions with actors." << endl;
	cout << "\t\t\t\t2. Do actions with clients." << endl;
	cout << "\t\t\t\t3. Back." << endl;
}

void ShowActorMenu() {
	cout << "\n\t\t\t\t\t\tActor setting:";
	cout << "\n\t\t\t\tA.  Show actors." << endl;
	cout << "\t\t\t\tB.  Add an actor." << endl;
	cout << "\t\t\t\tC.  Back." << endl;
}

void ShowClientMenu() {
	cout << "\n\t\t\t\t\t\tClient setting:";
	cout << "\n\t\t\t\tA.  Show clients from data file." << endl;
	cout << "\t\t\t\tB.  Back." << endl;

}


void SHOW_ALL_MENU()
{	
	cout << "\t\t\t\tAdmin work.WELCOME to the menu of cinema!\n" <<
	     	"\t\t\t\t\tNow we are ready to start! " << endl;
	
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
					cout << "--------------------------------------" << endl;
					cout << "| Result of the most popular movies: |\n";
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
				else if (op1 == 'B')
				{
					cout << "\nInput the kind of ticket to change the price:\t";
					comand.changeTicket();
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
				ShowMenuHuman();
				int ch;
				cin >> ch;
				bool x = true, y = true;
				if (ch == 1)
				{
					system("cls");
					while (x)
					{
						ShowActorMenu();
						char n;
						cin >> n;
						switch (n)
						{
						case 'A':
						{
							comand.Write("Actor");
						}break;
						case 'B':
						{
							do {
								string firstName, homeTown1;
								int rating, countMovies;
								cout << "Enter your name:\t";
								cin >> firstName;
								cout << "Enter number of movies:\t";
								cin >> countMovies;
								cout << "Enter rating:\t";
								cin >> rating;
								cout << "Enter hometown:\t";
								cin >> homeTown1;
								Actor actor(firstName, rating, countMovies, homeTown1);
								comand.addActor(actor);
								cout << "\nYour info was written sucessfully!" << endl;
								string answer;
								cout << "\t\tIf you want to buy one more actor please enter 'more'\n"
									<< "\t\t   in another way enter 'nope': ";
								cin >> answer;

								if (answer == "more") {
									string firstName11, homeTown11;
									int rating11, countMovies11;
									cout << "Enter your name:\t";
									cin >> firstName11;
									cout << "Enter number of movies:\t";
									cin >> countMovies11;
									cout << "Enter rating:\t";
									cin >> rating11;
									cout << "Enter hometown:\t";
									cin >> homeTown11;
									Actor actor1(firstName11, rating11, countMovies11, homeTown11);
									comand.addActor(actor1);
								}
								else { y = false; }
							} while (y);
							//x = false;
						}break;
						case 'C':
						{
							system("cls");
							x = false;
						}break;
						}
					}break;
				}

				if (ch == 2)
				{
					system("cls");
					while (y)
					{
						ShowClientMenu();
						char n;
						cin >> n;
						switch (n)
						{
						case 'A':
						{
							comand.Write("Client");
						}break;
						/*case 'B':
						{
							string firstName, movie, homeTown1;
							cout << "Enter your name:\t";
							cin >> firstName;
							cout << "Enter the movie you wanna see:\t";
							cin >> movie;
							cout << "Enter hometown:\t";
							cin >> homeTown1;
							Client client(firstName, movie, homeTown1);
							comand.addClient(client);
							cout << "Your info was written sucessfully!" << endl;
						}break;*/
						case 'B':
						{
							system("cls");
							y = false;
						}break;
						}
					}
				}
				else {
					system("cls"); 
					cycleOption = false;
				}
			} while (cycleOption);
		}break;
		case 4:
		{
			temp = false;
		}break;
		default:
			cout << "\nSorry!\nYou made a mistake in choosing an option!\nTRY AGAIN!\n";
		}
	}
}