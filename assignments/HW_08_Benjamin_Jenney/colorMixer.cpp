#include <iostream>
#include <string>
using namespace std;

int main()
{
	string color1, color2;
	cout << "please type in in which two colors to mix\n" <<
		"you can choose either red, blue, or yellow" << endl;
	cin >> color1 >> color2;
	if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
		cout << "purple" << endl;
	} else if ((color1 == "yellow" && color2 == "blue") || ( color1 == "blue" && color2 == "yellow")) {
		cout << "green" << endl;
	} else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
		cout << "orange" << endl;
	} else {
		cout << "please run again and make sure your entry is valid." << endl;
	}
}
