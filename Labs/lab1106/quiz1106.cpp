// This program shows different kind of variables used in a C++ program and corresponding scopes
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void func1();  // Function prototype
//int func2();
double func2();
void func3(int&);
void func3(double&);
//void func3(int);
//void func3(double)
//int func3(int&);

int num;

int main()
{
    //num = 100;
    //cout << "In global scope: " << ::num << endl;
	cout << "In main, num is " << num << endl;
	func1();
	cout << "After func 1 call, back in main, num is " << num << endl;
//    cout << "After func 2 call, back in main, a is " << a << endl;
    func3(num);
    cout << "After func 3 call, back in main, num is " << num << endl;
    int num = func2();
    cout << "After func 2 call, back in main, num is " << num << endl;
//  cout << "After func 3 call, back in main, a is " << a << endl;
    func3(num);
    cout << showpoint << fixed << setprecision(2) << func2() << endl;
	return 0;
}

/***************************************************************
 *                   func1，func2, func3                       *
 * This function displays the value of its local variable num. *
 ***************************************************************/
void func1()
{
	int num = 20;        // Local variable to func1
	cout << "In func1, num is " << num << endl;
}
double func2()
{
    int a = 0;        // Local variable to func2
    cout <<"In func2, num is " << num << endl;
    cout << "In func2, a is " << ++a << endl;
    return num+10;
}
void func3(double& num)
{
    static int a = 0;  // Local variable to func3
    num = 1000;
    cout << showpoint <<"In func3, num is " << num << endl;
    cout << "In func3, a is " << ++a << endl;
}

void func3(int& num)
{
    static int a = 0;  // Local variable to func3
    num = 1000;
    cout << showpoint <<"In func3, num is " << num << endl;
    cout << "In func3, a is " << ++a << endl;
}
