#include <iostream>
using namespace std;

int main() 
{
    int number, reversedNumber = 0;

    // Input a positive integer
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0)
	 {
        cout << "Please enter a positive integer." << endl;
    } else {
        // Reverse the number
        while (number > 0)
		 {
            int remainder = number % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            number /= 10;
        }

        // Display the reversed number
        cout << "Reversed number: " << reversedNumber << endl;
    }

    return 0;
}

