#include <iostream>
using namespace std;

int main() 
{
    double num1, num2, num3, maximum;

    // Input three numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    // Find the maximum using logical operators
    maximum = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3) ? num2 : num3;

    // Display the maximum number
    cout << "The maximum number is: " << maximum << endl;

    return 0;
}

