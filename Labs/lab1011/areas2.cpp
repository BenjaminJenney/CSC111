// Lab 4 areas.cpp 
// area checker
// Benjamin Jenney
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{  
   const double PI = 3.14159;
     
   double length, width, area, radius;
   int choice, check = 0;
   string stars;
   		stars.append(50, '*');
		cout << stars << endl;

   //menu
   do {
	   check++;
	   if (check >=  2) {
		   	cout << stars << "\nplease enter a valid option or quit the program\n"
			     << stars << endl;
	   }
	   cout << "select a shape you would like to calculate the area for "
		    << endl;
	   cout << "       1 -- square \n";
	   cout << "       2 -- circle\n"; 
	   cout	<< "       3 -- right traingle\n";
	   cout << "       4 -- quit"<< endl;
	   cin >> choice;
	   /*ORIGINAL: 
   } while (choice >  4 || 0 >= choice);
   */

   if (choice == 1) {
	   	cout << " what is the length of the square? " << endl;
		cin >> length;
		//FIXED: area of a square is side squared... dumb mistake.
		area = length * length;
		/*ORIGINAL:
		area = length * 4;
		*/
		cout << "the area is: " << area << endl;
   } else if (choice == 2) {
	    cout << "what is the radius of your circle? " << endl;
		cin >> radius;
		area = PI * (radius * radius);
		cout << "the area of the circle is " << area << endl;
   } else if (choice == 3) {
	   	cout << "what is the base of your triangle? " << endl;
		cin >> length;
		cout << "what is the height of your triangle? " << endl;
		cin >> width;
		area = (width * length) / 2.0;
		cout << "the area of your right triangle is " << area << endl;
   /* ORIGINAL: uneccasary.
   } else if (choice == 4) {
	   	return 0;
   }
   */
  //FIXED: made proper input validation logic
   } else if (choice != 4)
   {
	   cout << "Please enter a valid menu option: " << endl;
   }
   //FIXED: put post test in proper place so user can test areas to their hearts content.
	} while (choice != 4);
   // WRITE STATEMENTS HERE TO DISPLAY THE 4 MENU CHOICES.
   
   // WRITE A STATEMENT HERE TO INPUT THE USER'S MENU CHOICE.
   
   // USE AN IF/ELSE IF STATEMENT TO OBTAIN ANY NEEDED INPUT INFORMATION 
   // AND COMPUTE AND DISPLAY THE AREA FOR EACH VALID MENU CHOICE.
   // IF AN INVALID MENU CHOICE WAS ENTERED, AN ERROR MESSAGE SHOULD
   // BE DISPLAYED.
      
   return 0;
}
