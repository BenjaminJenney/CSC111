//Benjamin Jenney
//Median Function

#include <iostream>
using namespace std;

int getMedian(int*, int);

int main()
{
    const int SIZE = 8;
    int array[SIZE] = {1,3,4,6,12,20,30,31};
    int *pArray = array;
    cout << "The median is: " << getMedian(pArray, SIZE) << endl;
}

int getMedian(int *arr, int size)
{
    int middle = (size - 1) / 2;
    double median;

    if (size % 2 == 0)
    {
        median = (*(arr + middle) + *(arr + (middle + 1))) / 2;
    }
    else
        median = *(arr + (middle));

    return median;
}