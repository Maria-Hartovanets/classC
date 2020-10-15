#include "MainRepository.h"

Repository::~Repository()
{
	writeToFile();

}

Repository::Repository(bool data)
{
	this->data = data;
}

vector<Temp*> Repository::GetTemp()
{
	return temp;
}

void Repository::deleteIndex(int index)
{
	temp.erase(temp.begin() + index);
}


bool Repository::Add(Temp* en) {
	temp.push_back(en);
	if (data) {
		writeToFile();
	}
	return true;
}
