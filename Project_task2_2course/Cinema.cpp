#include "Cinema.h"
#include "DoCinema.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;



//Cinema::Cinema(){}

void Cinema::InfoCinema(string nameBuild, string place, int year)
{

	this->nameBuild = nameBuild;
	this->place = place;
	this->year = year;

}


string Cinema::WriteAllInfo1()
{
	return "name:" + nameBuild + " place: " + place + " and there is:\n";
}

void Cinema::WriteCinema()
{
	cout << "    Cinema info:" << endl;
	cout << "Name build: " << nameBuild << "\nplace: " << place << "\nyear: " << year << endl << endl;
}

