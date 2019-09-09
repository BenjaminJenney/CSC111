//This program tells you how many values in the array are larger than n.
//Benjamin Jenney
#include <iostream>

using namespace std;

void greaterThanN(int [], int, int);

int main()
{
    const int SIZE = 10;
    int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int n = 0;

    cout << "enter a number for n: ";
    cin >> n;
    greaterThanN(array, SIZE, n);
}

void greaterThanN(int arr[], const int INDEX, int n)
{
    for (int i = 0; i < INDEX; i++)
    {
        if (arr[i] > n)
            cout << arr[i] << endl;
        else
            cout << "No numbers are larger than n " << endl;
    }
}