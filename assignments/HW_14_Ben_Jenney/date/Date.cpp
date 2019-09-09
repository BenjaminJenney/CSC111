#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

//constructor
Date::Date(int m, int d, int y) {
	//invalid data defaults to january 1, 2001.
	month = 1; day = 1; year = 2001;
	//conditionals make sure of this
	if (m > 0 && m < 13){
	 switch (m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (d > 0 && d < 32){ 
				month = m;
				day = d;
				year = y;
			}
			break;
		case 2: 
			if (d > 0 && d < 29 ){
				month = m;
				day = d;
				year = y;
			}
			break;
		default: 
			if (d > 0 && d < 31){
				month = m;
				day = d;
				year = y;
			}
	 } 
	}
}

//accessors to print months in various styles.
void Date::getDateNumeric() {
	cout << month << "/" << day << "/" << year << endl;	
}
void Date::getDateEuro() {
	moName = moString();
 cout << day << " " << moName << "," << year << endl; 	
}
void Date::getDateUs() {
	moName = moString();
	cout << moName << " " << day << " " << year << endl;
}
//switch numerical values with corresponding month name
string Date::moString() {
	
	switch (month) {
		case 1: moName = "January";
			break;
		case 2: moName = "February";
			break;
		case 3: moName = "March";
			break;
		case 4: moName = "April";
			break;
		case 5: moName = "May";
			break;
		case 6: moName = "June";
			break;
		case 7: moName = "July";
			break;
		case 8: moName = "August";
			break;
		case 9: moName = "September";
			break;
		case 10: moName = "October";
			break;
		case 11: moName = "November";
			break;
		case 12: moName = "December";
			break;
	}

	return moName;
	
}
