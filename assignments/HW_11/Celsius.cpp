//converts farenheit from 0 - 20 degrees into celsius

#include <iostream>
#include <iomanip>

using namespace std;

double celsius(int);
int main()
{
    for(int F = 0; F < 20; F++)
    {
        
        cout << "Farenheit: " << F << setw(6) << " Celsius: " << celsius(F) << endl;
    }
}

double celsius(int F)
{
    return (5/9.0) * (F - 32);
}