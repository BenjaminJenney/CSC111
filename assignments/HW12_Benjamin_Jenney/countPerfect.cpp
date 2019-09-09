#include <iostream>
#include <vector>
using namespace std;

int countPerfect(int [], int);
int main()
{
    const int SIZE = 20;
    int array[SIZE];

    cout << "Enter up to 20 scores between 0 and 100 into the array.\n" << 
    "input -1 to quit" << endl;
        

    cout << countPerfect(array, SIZE) << " person(s) got a perfect score!" << endl;
}

int countPerfect(int arr[], const int size)
{
    int perfectScores = 0;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];

        while(arr[i] < -1 || arr[i] > 100)
        {
            cout << "Enter scores in the range of 0 and 100, or -1 to quit" << endl;
            cin >> arr[i];
        }

        if (arr[i] == -1)
        {
            return perfectScores;
        }

        if (arr[i] == 100)
        {
            perfectScores++;
        }
    }

    return perfectScores;
}