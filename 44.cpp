#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
int factorial(int num)
 {
    int fact = 1;
    for (int i = 1; i <= num; i++) 
	{
        fact *= i;
    }
    return fact;
}

int main() 
{
    int n = 5; // Number of terms in the series
    int sum = 0;

    // Calculate and display the sum of the series
    for (int i = 1; i <= n; i++)
	 {
        sum += factorial(i);
    }

    cout << "Sum of the series 1! + 2! + 3! + 4! + 5! is: " << sum << endl;

    return 0;
}

