#include <iostream>
using namespace std;

int main() 
{
    double base, exponent, result = 1.0;

    // Input the base and exponent
    cout << "Enter the base number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the result using a do-while loop
    if (exponent < 0) 
	{
        cout << "Exponent should be a non-negative integer." << endl;
    } 
	else 
	{
        int count = 0;
        do 
		{
            result *= base;
            count++;
        } while (count < exponent);
        
        // Display the result
        cout << base << " raised to the power of " << exponent << " is: " << result << endl;
    }

    return 0;
}

