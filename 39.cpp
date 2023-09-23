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
    } else {
        int factorial = 1;

        for (int i = 1; i <= number; i++) 
		{
            factorial *= i;
        }

        cout << "Factorial of " << number << " is: " << factorial << endl;
    }

    return 0;
}

