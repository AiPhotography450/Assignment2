#include <iostream>
using namespace std;

int main()
 {
    double sum = 0.0;

    // Calculate and display the sum of the series
    for (int i = 1; i <= 99; i++) 
	{
        sum += static_cast<double>(i) / (i + 1);
    }

    cout << "Sum of the series 1/2 + 2/3 + 3/4 + ... + 99/100 is: " << sum << endl;

    return 0;
}

