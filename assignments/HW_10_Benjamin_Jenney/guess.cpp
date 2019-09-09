#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	unsigned seed;
		seed = time(0);
		srand(seed);
	int randNum, guess;
		randNum = rand() % 100 + 1;
	
    cout << "guess a number between 1 & 100" <<  endl;
	cin >> guess;

	do{
		if (randNum > guess){
			cout << "Too low! guess again" << endl;
			cin >> guess;
		}
		else { 
			cout << "too high! guess again" << endl;
			cin >> guess;
		}
	} while (randNum != guess);

	cout << "You got it!!" << endl;
}
	
