#include <iostream>
using namespace std;

int main() 
{
    int number;

    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    // Initialize variables for calculation
    int factorial = 1;
    int i = 1;

    // Calculate the factorial using a while loop
    while (i <= number) 
	{
        factorial *= i;
        i++;
    }

    // Display the factorial
    cout << "Factorial of " << number << " is: " << factorial << endl;

    return 0;
}

