// Lab 6 choice.cpp 
// This program illustrates how to use a value-returning 
// function to get, validate, and return input data.
// PUT YOUR NAME HERE.
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
int getChoice(int min, int max);

/*****     main     *****/
int main()
{
   int choice, minRange, maxRange;
   
   cout << "Enter your desired range from min to max seperated by a space: ";
   cin >> minRange >> maxRange;
   // WRITE A LINE OF CODE TO CALL THE getChoice FUNCTION AND TO
   // ASSIGN THE VALUE IT RETURNS TO THE choice VARIABLE.
   choice = getChoice(minRange, maxRange);
   cout << "You entered " << choice << endl;
}

/*****     getChoice     *****/
int getChoice(int min, int max)
{
    int input;
   // Get and validate the input
   cout << "enter a number to see if it's within the range ";
   cin >> input;
   while (input < min || input > max)
   {  cout << "Invalid input. Enter an integer between the given range: ";
      cin  >> input;
   }
    return input;
}
