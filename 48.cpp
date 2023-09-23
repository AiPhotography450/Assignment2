#include <iostream>
using namespace std;

int main() 
{
    const int numValues = 5; // Number of values to input
    double values[numValues];

    // Input five values
    cout << "Enter five values, one at a time:" << endl;
    for (int i = 0; i < numValues; i++) 
	{
        cout << "Enter value " << i + 1 << ": ";
        cin >> values[i];
    }

    cout << "Squares and Cubes of the entered values:" << endl;

    // Calculate and display squares and cubes
    for (int i = 0; i < numValues; i++) 
	{
        double square = values[i] * values[i];
        double cube = values[i] * values[i] * values[i];
        cout << "Value " << values[i] << ": Square = " << square << ", Cube = " << cube << endl;
    }

    return 0;
}

