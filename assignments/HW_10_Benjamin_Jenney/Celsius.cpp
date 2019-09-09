#include <iostream>
#include <string>
#include <iomanip>
#include <array>

using namespace std;

int main()
{
	double F[32] = {};
    int C[32] = {};
	string output;
		output = "Farhenheit conversion chart.";
	string stars;
		stars.append(output.length(), '*');
		
	for (int i=0; i <= 30; i++) {
		F[i] = 9.0/5.0*i + 32.0;
		C[i] = i;
	}
	cout <<"\n" <<  output << '\n' << stars << endl;
	cout << fixed << setprecision(1) <<  "F";
	cout << right <<  setw(8) << "C" << endl;
	for (int i : C){
		cout <<  F[i];
		cout << right << setw(6) << C[i] << endl;
	}
}
