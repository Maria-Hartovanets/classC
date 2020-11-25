#include "Client.h"

Client::Client(string firstName,  string mov, string homeTown) :Human(firstName, homeTown)
{
	this->mov = mov;
}



string Client::GetStorageName()
{
	return "Client.txt";
}

string Client::GetStorageNameOut()
{
	return "Clientout.txt";
}

string Client::GetHeader()
{
	return "Client info:\n";
}

ifstream& operator>>(ifstream& fin, Client& client)
{
	string firstName, homeTown, mov;

	fin >> firstName >> mov >>  homeTown;
	client.firstName = firstName;
	client.mov = mov;
	client.homeTown = homeTown;

	return fin;
}

ofstream& operator<<(ofstream& fout, Client& client)
{
	char pr = ' ';
	fout << client.firstName << pr
		<< client.mov << pr
		<< client.homeTown;
	return fout;
}

ostream& operator<<(ostream& out, Client& client)
{
	out << "Name: " << client.firstName
		<< "\t|\tMovie to see: " << client.mov
		<< "\t|\tHomeTowm: " << client.homeTown;
	return out;
}
