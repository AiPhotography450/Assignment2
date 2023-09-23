#include <iostream>
using namespace std;

int main()
 {
    int n;

    // Input a positive integer 'n'
    cout << "Enter a positive integer (n): ";
    cin >> n;

    if (n <= 0) 
	{
        cout << "Please enter a positive integer." << endl;
    } else {
        int sum = 0;

        // Calculate the sum of squares using a for loop
        for (int i = 1; i <= n; i++) 
		{
            sum += i * i;
        }

        // Display the sum of squares
        cout << "Sum of squares from 1 to " << n << ": " << sum << endl;
    }

    return 0;
}

