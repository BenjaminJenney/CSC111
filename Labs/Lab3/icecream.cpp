// Lab 3 icecream.cpp 
// sales calculator for deLIGHTful ices
// Benjamin Jenney
#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

int main()
{  
  const double SINGLE_SCOOP = 1.49, DBL_SCOOP = 2.49, TRIP_SCOOP = 3.49;
  double snglScpSales, dblScpSales, trplScpSales, totSales;
  int totConesSold, numSnglSold, numDblSold, numTrplSold;
  string dashes;
  dashes.append(40, '-');
   // DECLARE ALL NEEDED VARIABLES HERE. GIVE EACH ONE A DESCRIPTIVE
   // NAME AND AN APPROPRIATE DATA TYPE.
	cout << "Please enter number of deLIGHTful single scoops sold: "; 
	cin >> numSnglSold;
	cout << "Please enter number of deLIGHTful double scoops sold: ";
	cin >> numDblSold;
	cout << "Please enter number of deLIGHTful triple scoops sold: ";
	cin >> numTrplSold;
    cout << "\n";
   // WRITE STATEMENTS HERE TO PROMPT FOR AND INPUT THE INFORMATION
   // THE PROGRAM NEEDS TO GET FROM THE USER.
   snglScpSales = SINGLE_SCOOP * numSnglSold;
   dblScpSales = DBL_SCOOP * numDblSold;
   trplScpSales = TRIP_SCOOP * numTrplSold;
   totSales = (snglScpSales + dblScpSales + trplScpSales);

   totConesSold = (numSnglSold + numDblSold + numTrplSold);
   // WRITE STATEMENTS HERE TO PERFORM ALL NEEDED COMPUTATIONS  
   // AND ASSIGN THE RESULTS TO VARIABLES.
   cout << dashes << endl;
   cout << "DeLIGHTful cones " << right << setw(10) << fixed << setprecision(2)
	   << numSnglSold << "   $ " << snglScpSales << endl;
   cout << "Double DeLIGHT cones " << right << setw(6) << fixed
	   << setprecision(2) << numDblSold << "   $" << dblScpSales << endl;
   cout << "Triple DeLIGHT cones " << right << setw(6) << fixed 
	   << setprecision(2) << numTrplSold << "   $ " << trplScpSales << endl;
   cout << "Total " << right << setw(21) << fixed << setprecision(2) 
	   << totConesSold <<  "   $" << totSales << endl;
   // WRITE STATEMENTS HERE TO DISPLAY THE REQUESTED INFORMATION.
      
   return 0;
}
