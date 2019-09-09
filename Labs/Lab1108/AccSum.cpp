// Lab 1108 write a complete program
//Benjamin Jenney
// that uses different functions to calculate the accumulated sum from 0 to N (postive integer).
// You are required to complete the following functions to use in your program
// void get_input(): a function that takes and validates the input (positive integer) from user keyboard
// int get_sum_rec(): a function that use recursive approach to calculating the accumulated sum from 0 to N
// int get_sum_iter(): a function that use iterative (loop) approach to calculating the accumulated sum from 0 to N
// bool test_equal(): a functionthat compares whether the inputted paremeters are equal
// modify the functions so that you can track how many times each function is callled

#include <iostream>
using namespace std;

// Function prototype (parameters needed per function decided by you)
void get_input(int&);
int get_sum_rec(int);
int get_sum_iter(int);
bool test_equal(int, int);


int main()
{
    int number;
    get_input(number);
    int get_sum_rec_called = 0, get_sum_iter_called = 0;
    
    if (test_equal(get_sum_rec(number), get_sum_iter(number)))
    {
        cout << "\nYou got the same output from iterative and recursive function\n"<< endl;
        int sum = get_sum_rec(number);
        cout << "\nThe sum is " << sum << endl;
    }
    else
    {
        cout << "\nYou need to check your function definition\n" << endl;
    }
    return 0;
}

//****************************************************
// Definitions of the functions to be defined         *
//****************************************************
void get_input(int& num)
{
    static int count = 0;
    count++; //Counts each time the function is called

    cout << "please enter a positive integer " << endl;
    cin >> num;
    //Validation loop.
    while (num < 0)
    {
        cout << "please enter a Positive Integer " << endl;
        cin >> num;
    }
}

int get_sum_rec(int num)
{
    static int count = 0;
    count++;
//Unfortunately this prints the count to terminal once everytime this function is called, 
//rather than printing just the total number of times called once after the function is finished, 
//I could not figure out a better way to do this :(
    cout << "\nnumber of times get_sum_rec was called =  " << count << endl; 
    if (num <= 1)
    {
        return num;
    }
    else
    {
        return get_sum_rec(num - 1) + num;
    }
}

int get_sum_iter(int num)
{
    static int count = 0;
    count++;

    int sum = 0;

    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    cout << "number of times get_sum_iter was called =  " << count << endl;  
    return sum;
}

bool test_equal(int num1, int num2)
{
    if (num1 == num2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
