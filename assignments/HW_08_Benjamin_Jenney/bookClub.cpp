//Book club point calculator
//Benjamin Jenney

#include <iostream>
using namespace std;
int main()
{
	int books = 0, points = 0;
	
	cout << "how many books have you bought this month? " << endl;
	cin >> books;

	if( books == 1 ) {
		points = 5;
	} else if (books == 2) {
		points = 15;
	} else if (books == 3) {
		points = 30;
	} else if (books > 3) {
		points = 50;
	}
	cout << "you have earned " << points <<" points" <<  endl;
}
