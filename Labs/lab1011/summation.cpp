// Lab 5 - summation.cpp
// This program displays a series of terms and computes its sum.
// PUT YOUR NAME HERE.                        
#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{ 
 char cont;	

  do {	
  int denom = 1,
	  finalDenom = 1024,
	  runs = 0;
	double sum = 0.0;		    	
   cout << "How many loops? pick a number between two and ten. " << endl;
   cin >> runs;
   for (int i = 2; denom < finalDenom &&  runs > 0; runs--) {
	 denom *= i;
	 sum += 1.0/denom;
   }
 	// WRITE A LINE OF CODE TO PRINT THE SUM. 	
	 cout <<"the sum is: " <<  sum << endl;
	cout << "would you like to try again ?? 'y' for yes 'n' for no"<< endl;
	cin >> cont;
	tolower(cont);

 } while (cont == 'y');

	return 0;
}
