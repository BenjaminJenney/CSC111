#include <iostream>
#include <fstream>        // Needed to use files
#include <string>
using namespace std;

const string input_filename = "/home/benjamin/Desktop/Lab1206/myinput.txt";
const string output_filename = "/home/benjamin/Desktop/Lab1206/output.txt";
const int N = 10;
//prototype for averaging function
double average(int*, int);

//when provided the amount of values read from file as an argument
//this overloaded average function below will only find the average for those values
//which is important since the size of the array may be greater
//than amount of values read from file.

//prototype for overload of average function
double average(int*, int, int); 

//prototype for addbyten
void addByTen(int*, int);

int main()
{
	ifstream inputFile;
    ofstream outputFile;
    int array[N];
    int numOfInputVals = 0;
 
    // Open the input file
    inputFile.open(input_filename);
    
    if(!inputFile)
    {
        cout << "file open error" << endl;
    }

    int number; 

    for(int count = 1; count <= N && (inputFile >> number) ; count ++)
    {
        int index = count - 1;
        cout << "No." << count << " is: " << number << endl;
        //assign each element to an array
        array[index] = number;
       // cout << array[index] << endl;

        numOfInputVals++;
    }
    
   // cout << "The average is " << average(array, N) << endl;

    cout << "The average of numbers read from file: " << average(array, N, numOfInputVals) << endl;

    addByTen(array, N);

    //open output file
     outputFile.open(output_filename, ofstream::out | ofstream::trunc);

    for (int i = 0; i < N; i++)
    {
        outputFile << array[i] << " ";
    }
     cout << endl;

     inputFile.close(); //close the openned file
     outputFile.close();
      return 0;
  }

//when average is given two arguments (array, N) it will average all elements in the array including those defaulted to 0.
double average(int *arr, int size)
{
    int acc = 0;
     for (int i = 0; i < size; i++)
     {
         acc += *(arr + i);
         //cout << *(arr + i) << endl;
     }

    return acc / double(size);
}
//this will find the average of only the numbers read from file, despite size of the array.
double average(int *arr, int size, int numInput)
{
    int acc = 0;
     for (int i = 0; i < numInput; i++)
     {
         acc += *(arr + i);
       // cout << *(arr + i) << endl;
    }

    return acc / double(numInput);
}
//will add 10 to all elements in array
void addByTen(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr + i) += 10;
    }
}
