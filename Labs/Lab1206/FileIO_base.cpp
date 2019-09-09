//Benjamin Jenney

//Ended up doing a bunch of work on inputsample
//before seeing this code :( if you have the time
// take a look
#include <iostream>
#include <fstream>        // Needed to use files
#include <string>
using namespace std;

//modify to --> const string input_filename = "myinput.txt"; when you put the code and input file in the same folder
const string input_filename = "/home/benjamin/Desktop/Lab1206/myinput.txt";

//modify to --> const string output_filename = "myoutput.txt"; when the output file will be outputted into the same folder with the code
const string output_filename = "/home/benjamin/Desktop/Lab1206/output.txt";

const int N = 6; //make sure N is smaller than 8, since there are only 8 values in myinput.txt, the number of values to read
double get_average_array(int[], int); //use array as function parameters
double get_average_pointer(int *, int); // user pointer as function parameters, equivalently.
void add_10_to_array(int *, int);

void show_array(int *arr_ptr, int size)
{
    for(int count = 0; count < size; count++)
        cout << *(arr_ptr+count) << " ";
    cout << endl;
}

int main()
{
	ifstream inputFile;
    ofstream outputFile;
 
    // Open the input/output file
    inputFile.open(input_filename);;
    outputFile.open(output_filename, ofstream::out | ofstream::trunc);
    int number; // define a variable to hold each value will be read in
    int array[N]; //define an array that can hold N integer value

	// Use a loop to get the first N numbers saved in the file and save each value to the array
    for(int count = 1; count <= N && (inputFile >> number); count ++)
    {
        int index = count - 1;
        cout << "No." << count << " is: " << number << endl;
        array[index] = number;
    }
    
    cout << "The values stored in array are: \n";
    show_array(array, N);
    cout << "The average of the values stored in array is (using array as function parameter): " << get_average_array(array, N) << endl;
    cout << "The average of the values stored in array is (using pointer as function parameter): " << get_average_pointer(array, N) << endl;
    
    cout << "Begin to add 10 to each value of the arary\n";
    add_10_to_array(array, N);
    cout << "The values stored after adding 10 in array are: \n";
    show_array(array, N);
    
    for(int val: array){
        outputFile << val;
        outputFile << "\n";
        cout << val << " now is saved to " << output_filename << endl;// need to add sep?
    }
    
    
    //close the openned files!
    inputFile.close();
    outputFile.close();

    return 0;
 }



double get_average_array(int arr[], int size)
{
    int acc = 0;
     for (int i = 0; i < size; i++)
     {
         acc += arr[i];
     }
     return acc / double(size);
}

double get_average_pointer(int *arr_ptr, int size)
{
      int acc = 0;
     for (int i = 0; i < size; i++)
     {
         acc += *(arr_ptr + i);
     }

    return acc / double(size);
}

void add_10_to_array(int *arr_ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(arr_ptr + i) += 10;
    }
}

