#pragma once
#include <iostream>
using namespace std;


void ShowMenu() {

	cout << "\n  1. Do actions with cinema." << endl;
	cout << "  2. Do actions with movies." << endl;
	cout << "  3. Do actions with ticket." << endl;
	cout << "  4. !NEW! Show 'menu of humans'." << endl;
	cout << "  5. To finish the programm." << endl;
	cout << "Your choice:";
}

void ShowCinemaMenu() {
	cout << "\n  A. Show infomations of all cinema." << endl;
	cout << "  B. Show the oldest cinema." << endl;
	cout << "  C. Back." << endl;
}

void ShowMovieMenu() {
	cout << "\n  A. Show infomations of all movies." << endl;
	cout << "  B. Show the most popular movies." << endl;
	cout << "  C. Back." << endl;
}


void ShowTicketMenu() {
	cout << "\n  A. Change ticket of movie." << endl;
	cout << "  B. Back." << endl;
}

void ShowMenuHuman() {
	cout << "\n1. Do actions with actors." << endl;
	cout << "2. Do actions with clients." << endl;
}

void ShowActorMenu() {
	cout << "\nA.  Show actors." << endl;
	cout << "B.  Add an actor." << endl;
	cout << "C.  Delete an actor." << endl;
	cout << "D.  Change rating." << endl;
	cout << "E.  Back." << endl;
}

void ShowClientMenu() {
	cout << "\nA.  Show clients." << endl;
	cout << "B.  Add an client." << endl;
	cout << "C.  Delete an client." << endl;
	cout << "D.  Change place." << endl;
	cout << "E.  Back." << endl;

}