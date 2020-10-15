#pragma once
#include <iostream>
using namespace std;


void ShowMenu() {

	
	cout << "\n  1. Do actions with movies." << endl;
	cout << "  2. Do actions with ticket." << endl;
	cout << "  3. !NEW! Show 'menu of humans'." << endl;
	cout << "  4. To finish the programm." << endl;
	cout << "Your choice:";
}

void ShowMovieMenu() {
	cout << "\n  A. Show infomation of all movies." << endl;
	cout << "  B. Show the most popular movie." << endl;
	cout << "  C. Back." << endl;
}


void ShowTicketMenu() {
	cout << "\n  A. Show more(w/ price) infomation of all movies." << endl;
	cout << "  B. Change ticket of movie." << endl;
	cout << "  C. Back." << endl;
}

void ShowMenuHuman() {
	cout << "\n1. Do actions with actors." << endl;
	cout << "2. Do actions with clients." << endl;
}

void ShowActorMenu() {
	cout << "\nA.  Show actors." << endl;
	cout << "B.  Add an actor." << endl;
	cout << "C.  Back." << endl;
}

void ShowClientMenu() {
	cout << "\nA.  Show clients from data file." << endl;
	cout << "B.  Make an order." << endl;
	cout << "C.  Back." << endl;

}