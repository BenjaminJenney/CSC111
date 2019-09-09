/* Lab 1108 write a complete program
This program should ask user keep inputting postive integers (until the user input 0 (sentinel value)) and in the end display the maximum number user has input.

 In this program, you need to write a loop that take the input number from user repeatedly. In each iteration, you should validate whether the number input by the user is non-negative, if not, ask for a new input. (a input&validation function is required for this).
 Benjamin Jenney*/

#include <iostream> 
void validate(int&);
int maxInput();

int main()
{
    int maximum = 0;

    maximum = maxInput();

    std::cout << "The maximum input is " << maximum << std::endl;

}

//Function to check for any negative input, if integer is negative prompts user to input a positive integer.
void validate(int& num)
{
    while (num < 0)
    {
        std::cout << "Please enter a positive integer!" << std::endl;
        std::cin >> num;
    }
}

int maxInput()
{
    int num = -1; //Initialize input to -1 ensuring while loop will run at least once.
    int max = -1; //Initialize max guess to -1 to ensure that first valid input will be greater than max.

    std::cout << "Please enter a postive integer greater than 0 " << 
            "enter 0 once done inputting values" << std::endl;
    std::cin >> num;
    
    while (num != 0)
    {
        std::cin >> num;
        //Validates input is non-negative.
        validate(num);

        //Measures each input value (num) against the latest input.
        //Max will be updated any time num is greater than the last input.
        if (num > max)
        {
            max = num;
        }
    }  
    return max;
}

