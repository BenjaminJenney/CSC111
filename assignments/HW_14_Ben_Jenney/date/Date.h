//class declaration
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

using namespace std;

class Date {
private:
	//member variables set to private
	int month, day, year;
	string moName;
	public:
	//constructor declaration
	Date(int m, int d, int y);
	//member functions
	string moString();
	void getDateNumeric();
	void getDateEuro();
	void getDateUs();
};

#endif
