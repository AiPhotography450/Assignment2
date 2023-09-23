#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) 
	{
        cout << "Factorial is not defined for negative numbers." << endl;
    } 
	else 
	{
        int factorial = 1;
        int i = 1;

        do 
		{
            factorial *= i;
            i++;
        } 
		while (i <= number);

        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}

