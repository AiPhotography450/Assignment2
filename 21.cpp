#include <iostream>
using namespace std;

int main() 
{
    double num1, num2, num3, smallest;

    // Input three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Initialize the smallest with the first number
    smallest = num1;

    // Nested if conditions to find the smallest number
    if (num2 < smallest) 
	{
        smallest = num2;
    }

    if (num3 < smallest) 
	{
        smallest = num3;
    }

    // Display the smallest number
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}

