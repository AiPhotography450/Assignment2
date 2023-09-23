#include <iostream>
using namespace std;

int main() 
{
    double number;

    // Input a number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        cout << number << " is a positive number." << endl;
    } else if (number < 0) {
        cout << number << " is a negative number." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
