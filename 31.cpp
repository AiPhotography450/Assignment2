#include <iostream>
using namespace std;

int main() 
{
    double sum = 0.0;
    int denominator = 1;

    // Use a while loop to calculate the sum
    while (denominator <= 100) 
	{
        sum += 1.0 / denominator;
        denominator += 2; // Increment by 2 for the next term (1/4, 1/6, ...)
    }

    // Display the sum
    cout << "Sum of the series: " << sum << endl;

    return 0;
}

