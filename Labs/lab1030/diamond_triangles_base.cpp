// This program uses nested loops to display a diamond or triangle.
//read this program, try to optimize the output display
//1. define a void function that can be used to display the menu of choices
//2. write a function that validate the user-inputted value for numRows, and return the valid the value
//3. write a function take the input from user to be assigned to variable ch
//modify the program accodingly by calling functions you defined you step 1-3.

#include <iostream>
#include <cctype>
void printDiamond(int, char); //to be completed
void printTriangle(int, char); //to be completed
void displayMenu();
int validateInput();
char assignChar();
using namespace std;

int main()
{
    
    char doMore;
    int numRows;           // Number of rows
    char ch;
    do{
        int shapeChoice;
        
        displayMenu();
        cin >> shapeChoice;
        while ((shapeChoice != 1 && shapeChoice !=2 ) && (shapeChoice != 3)) {
            displayMenu();
        }
    

        switch (shapeChoice) {
            case 1:
                //to be replaces with input-validation function
                numRows = validateInput();
                //to be replaced with character-input function
                ch = assignChar();
                printDiamond(numRows, ch);
                break;
            
            case 2:
                //to be replaces with input-validation function
                cout << "Please enter a positive odd integer to print a shape: ";
                cin >> numRows;
                cout << endl;
                while(!(numRows>0) || numRows % 2 == 0){
                    cout << "Your input is not a postive odd integer! Please re-enter: ";
                    cin >> numRows;
                    cout << endl;
                }
                //to be replaced with character-input function
                ch = assignChar();
                printTriangle(numRows, ch);
                break;
            case 3:
                cout <<"Good bye!";
                return 0;
            
            default:
                break;
    }
        cout << "Do want to play more? Y/N: ";
        cin >> doMore;
        cout << endl;
    }while(toupper(doMore) == 'Y');
    
    return 0;
}

void displayMenu()
{
        cout << "Please select from the menu below"<<endl;
        cout << "---------------------------------"<<endl;
        cout << "1: Diamond"<<endl;
        cout << "2: Triangle"<<endl;
        cout << "3: Exit!" <<endl;
}

int validateInput()
{
    int numRows;
     cout << "Please enter a positive odd integer to print a shape: ";
                cin >> numRows;
                cout << endl;
                while(!(numRows>0) || numRows % 2 == 0){
                    cout << "Your input is not a postive odd integer! Please re-enter: ";
                    cin >> numRows;
                    cout << endl;
                }
    return numRows;
}
char assignChar()
{
    char ch;
     cout << "Please enter a character you want to display in the shape: ";
                cin >> ch;
                cout << endl;
    return ch;
}


void printDiamond(int numRows, char ch){
    for (int row = 1; row <= numRows; row++)
    {
        // Compute the number of ch and number of leading spaces for this row
        int numChs = 2 * row - 1;      // This works for rows 1 thru (numRows + 1) /2
        
        if (numChs > numRows)     // This adjusts rows  (numRows + 1)/2  + 1 thru numRows
            numChs = 2*numRows - numChs;
        
        int numSpaces = (numRows - numChs) / 2;
        
        // Inner loop to print the leading spaces for this row
        for (int space = 1; space <= numSpaces; space++)
            cout << ' ';
        
        // Inner loop to print the chs for this row
        for (int plus = 1; plus <= numChs; plus++)
            cout << ch;
        
        // Go to the next row
        cout << endl;
    }
}


void printTriangle(int numRows, char ch){
    for (int row = 1; row <= numRows; row++)
    {
        // Compute the number of ch for this row
        int numChs = 2 * row - 1;      // This works for rows 1 thru (numRows + 1) /2
        
        if (numChs > numRows)     //This adjusts rows  (numRows + 1)/2  + 1 thru numRows
            numChs = 2*numRows - numChs;
        
        // Inner loop to print the chs for this row
        for (int plus = 1; plus <= numChs; plus++)
            cout << ch;
        
        // Go to the next row
        cout << endl;
    }
}



















