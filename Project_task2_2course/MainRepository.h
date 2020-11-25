#ifndef MAINREPOSITORY_H
#define MAINREPOSITORY_H

#include <fstream>
#include <vector>
#include <iostream>
using namespace std;



template <class T>
class Repository {
private:

	bool data;

	int size;
	T* array;
	int current;

	void readFromFile();
	void writeToFile();
	
     string GetStorageName()
	{
		T t;
		return t.GetStorageName();
	}

	string GetStorageNameOut()
	{
		T t;
		return t.GetStorageNameOut();
	}

	string GetHeader()
	{
		T t;
		return t.GetHeader();
	}
public:
	int GetRating() {
		T t;
		return t.GetRating();
	}

	int GetPrice() {
		T t;
		return t.GetPrice();
	}

	int GetCurrent() {
		return current;
	}

	void ChangeValue(int value);

	~Repository();

	Repository(bool data = false);

	void writeToConsole();

	bool Add(T& t);

	T& operator[](const int index);
	
};


template<class T>
inline void Repository<T>::readFromFile()
{
	ifstream fileName(GetStorageName());

	if (!fileName)          /////////////////////          Verify problem
	{
		std::cout << "Incorrect an option and name of file!";
		exit(1);
	}
	while(!fileName.eof())
	{
		T temp;
		fileName >> temp;
		Add(temp);
	}

	fileName.close();
}

template<class T>
inline void Repository<T>::writeToFile()
{
	ofstream fileName(GetStorageNameOut(), ios::out);

	if (!fileName)
	{
		throw("Error: TEXTout.txt not found");
	}
	else {
		for (int i = 0; i <= current; i++)
		{
			fileName << array[i];
			if (current > i) { fileName << "\n"; }
		}
	}
	fileName.close();
}

template<class T>
inline void Repository<T>::ChangeValue(int value)
{
	T t;
	t.ChangeValue(value);

}

template <class T>
inline Repository<T>::~Repository()
{
	writeToFile();
	delete[] array;

}

template <class T>
inline Repository<T>::Repository(bool data)
{
	this->data = data;
	size = 10;
	array = new T[size];
	current = -1;
	readFromFile();
}

template<class T>
inline void Repository<T>::writeToConsole()
{
	cout << "---------------" << endl << " ";
	cout << GetHeader();
	cout << "---------------" << endl;
	for (int i = 0; i <= current; i++)
	{ 
		if (i == 0) {
			cout << "---------------------------------------------"
				<<"----------------------------------------------"
				<<"--------------------------\n";
		}
		cout << array[i] << endl;
		if (i == current) {
			cout << "---------------------------------------------"
				<< "----------------------------------------------"
				<< "--------------------------\n";
		}
	}
}



template <class T>
inline bool Repository<T>::Add(T& temp) {
	array[++current] = temp;
	if (data) {
		writeToFile();
	}
	return true;
}

template<class T>
inline T& Repository<T>::operator[](const int index)
{
	return array[index];
}




#endif
