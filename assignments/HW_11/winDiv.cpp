//ORIGINAL: THIS HAS BEEN FIXED, CHECK HW11.CPP.
//Determines company division highest sellers

#include <iostream>
#include <string>

using namespace std;
double getSales(string);
void getHighest(double[], string[]);

int main()
{
    double sales[4];
    string divisionName[] = {"NorthEast", "NorthWest", "SouthEast", "SouthWest"};

    for (int i = 0; i < 4; i++)
    {
        sales[i] = getSales(divisionName[i]);   
    }

    getHighest(sales, divisionName);
    
    return 0;
}

double getSales(string name)
{
    double sales;
    cout << "Enter the " << name << " Divisions Quaterly Sales: ";
    cin >> sales;
    
     if (sales > 0)
    {
        return sales;
    }
    else
    {    
        cout << "Please enter a sales amount: ";
        cin >> sales;
}

    void getHighest(double sales[4], string name[])
{
    double check[4];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 1; j < 4; j++)
        {
            if(sales[i] < sales[j])
            {
                sales[i] = sales[j];
                name[i] = name[j];
            }
        }
    }
    cout << "The winner is the " << name[0]  << " division who's total sales of $" <<  sales[0] << " is the highest" << endl;
}