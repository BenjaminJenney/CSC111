// Lab 3 percentage.cpp
// This program will determine the percentage 
// of answers a student got correct on a test.
// Benjamin Jenney

// INCLUDE THE FILE NEEDED TO DO I/O
// INCLUDE THE FILE NEEDED TO FORMAT OUTPUT
// INCLUDE THE FILE NEEDED TO USE STRINGS
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
   string name;
   int numQuestions,
       numCorrect;
   double percentage = 0;
   
   // Get student's test data
   cout << "Enter student's first and last name: ";
   getline(cin, name);
   // WRITE A STATEMENT TO READ THE WHOLE NAME INTO THE name VARIABLE.
   
   cout << "Number of questions on the test: ";
   cin  >> numQuestions;
   cout << "Number of answers the student got correct: ";
   cin  >> numCorrect;
   cout << "\n";
   
   percentage = (static_cast<double>(numCorrect) / numQuestions);
   percentage *= 100;
     // Compute and display the student's % correct
   // WRITE A STATEMENT TO COMPUTE THE % AND ASSIGN THE RESULT TO percentage.
   //cout << name << endl;
   // WRITE STATEMENTS TO DISPLAY THE STUDENT'S NAME AND THEIR TEST 
   // PERCENTAGE WITH ONE DECIMAL POINT. 
   cout << name << " " << setw(6) << setprecision(1) << fixed
	   <<  percentage << "%" <<  endl;
   return 0;
}
