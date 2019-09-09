//Benjamin Jenney
//Datalizer

#include <iostream>
#include <string>
#include "Date.h"
//driver
int main()
{
	Date birthday(2,28,2001);//instatiate Date class

	//call member functions using dot operator
	birthday.getDateNumeric();
	birthday.getDateEuro();
	birthday.getDateUs();
	
}
