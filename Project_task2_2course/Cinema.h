#ifndef CINEMA_H
#define CINEMA_H


#include <string>
using namespace std;

class Cinema
{
	string nameBuild;
	string place;
	//int date;

public:
	int year;

	//Cinema();

	void InfoCinema( /*string doing,*/string = "Forum", string = "Lviv", int year = 1990);

	string WriteAllInfo1();

	void WriteCinema();

};

#endif // !CINEMA_H