#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Display values before exchange
    cout << "Values before exchange:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    // Exchange the values
    double temp = num1;
    num1 = num2;
    num2 = temp;

    // Display values after exchange
    cout << "Values after exchange:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}

