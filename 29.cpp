#include <iostream>
using namespace std;

int main() 
{
    int number;

    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    cout << "Multiplication Table for " << number << ":" << endl;

    int multiplier = 1;

    // Display the table using a while loop
    while (multiplier <= 10) 
	{
        cout << number << " x " << multiplier << " = " << number * multiplier << endl;
        multiplier++;
    }

    return 0;
}

