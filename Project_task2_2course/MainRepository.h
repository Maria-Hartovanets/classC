#ifndef MAINREPOSITORY_H
#define MAINREPOSITORY_H

#include "Temp.h"
#include <fstream>
#include <vector>
using namespace std;

class Repository {
protected:
	bool Add(Temp*);

	bool data;

	vector <Temp*> temp;
public:
	~Repository();

	Repository(bool data = false);

	virtual void writeToFile()
	{
	}

	virtual void readFromFile() 
	{
	}

	vector <Temp*> GetTemp();

	void deleteIndex(int index);

};

#endif

