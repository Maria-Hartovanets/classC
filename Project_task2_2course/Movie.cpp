#include "Movie.h"
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;


Movie::Movie(string nameMovie, string genre, int rating) :
	Cinema(nameMovie, genre, rating)
{
	
}


void Movie::writeInfo()
{
	//cout << "\tAll info of movie:\n";
	cout <<"\nName: " << nameMovie << "\ngenre: " << genre 
		<< " \nrating:" << rating << endl;
}


