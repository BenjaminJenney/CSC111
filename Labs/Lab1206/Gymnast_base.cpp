// This program demonstrates a simple class.
#include <iostream>
#include <string>
using namespace std;

// Please complete the definition of class Gymnast
// Once complete, please try to run the program.
class Gymnast
{
private:
		string firstName;
      string lastName;
      int weight;
      int scores[3];
      double scoreAverage; 
public:
//constructor
   Gymnast(string f, string l)
   {
      firstName = f;
      lastName = l;
      weight = 0;
      scoreAverage = 0.0;
   }
//mutators
   void setWeight(int w)
   { weight = w; }

   void setScores(int arr[])
   {
      for (int i = 0; i < 3; i++)
      {
         scores[i] = arr[i];
      }
   }

//accessors
   double getAverage()
   {
      scoreAverage = (scores[0] + scores[1] + scores[2]) / 3.0;
      return scoreAverage;
   }

   string getFirstName()
   { return firstName; }

   string getLastName()
   { return lastName; }

   void getScores()
   {
      for (int i = 0; i < 3; i++)
      cout << scores[i] << " " << endl; 
   }

};
//driver
int main()
{
   // Define a Gymnast object named newguy.
   // Uses a constructer that accepts first and last name as args.
   // ordered from first to last
    Gymnast newguy("Susan", "Kobe");
    // Read in values for newguy's last name
    cout << "new guys's last name is " << newguy.getLastName() << endl;
   // Call the setRadius function for each circle
    int scores[] = {10,10,9};
    newguy.setScores(scores);
    cout << "new guy has scores: " << endl;
    newguy.getScores();
   //Compute newguy's average score and store the average.
    cout << "new guy "<< newguy.getLastName() <<" has average score of " << newguy.getAverage() <<endl;

   return 0;
}
