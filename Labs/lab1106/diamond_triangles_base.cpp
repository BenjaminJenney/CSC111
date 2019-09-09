// This program uses nested loops to display a diamond or triangle.
//read this program, try to optimize the output display
//1. modify function getNumRows() to void return type,but still successfully take the input from users and assign back to correspoding argument variables.
//2. modify function getChar() to void return type,but still successfully take the input from users and assign back to correspoding argument variables.
//modify the program accodingly by calling functions you defined you step 1-2.
//Benjamin Jenney

#include <iostream>
#include <cctype>
void printDiamond(int, char);
void printTriangle(int, char);
void displayMenu();
void getNumRows(int&);// to be modified into void getNumRows(?)
void getChar(char&);//to be modified into void getChar(?)


using namespace std;

int main()
{
    
    char doMore;
    int numRows = 0;           // Number of rows
    char ch;
    do{
        int shapeChoice;
        //to be replaces with menu-display function
        displayMenu();
        cin >> shapeChoice;
        while ((shapeChoice != 1 && shapeChoice !=2 ) && (shapeChoice != 3)) {
            //to be replaces with menu-display function
            displayMenu();
            cin >> shapeChoice;
        }
    

        switch (shapeChoice) {
            case 1:
                //to be replaces with new input-validation function call
                getNumRows(numRows);
                //to be replaced with new character-input function call
                getChar(ch);
                printDiamond(numRows, ch);
                break;
            
            case 2:
                //to be replaces with new input-validation function call
                getNumRows(numRows);
                //to be replaced with new character-input function call
                getChar(ch);
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



void displayMenu(){
    cout << "Please select from the menu below"<<endl;
    cout << "---------------------------------"<<endl;
    cout << "1: Diamond"<<endl;
    cout << "2: Triangle"<<endl;
    cout << "3: Exit!" <<endl;
}

/*******************************
 *functions need to be modified*
 ******************************/

void getNumRows(int& numRows){
    cout << "Please enter a positive odd integer to print a shape: ";
    cin >> numRows;
    cout << endl;
    while(!(numRows>0) || numRows % 2 == 0){
        cout << "Your input is not a postive odd integer! Please re-enter: ";
        cin >> numRows;
        cout << endl;
    }
}
void getChar(char& ch){
    cout << "Please enter a charachter you want to display in the shape: ";
    cin >> ch;
    cout << endl;
}















