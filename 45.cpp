#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 5; // Number of terms in the series
    double x; // Value of x
    double sum = 0.0;

    // Input the value of x
    cout << "Enter the value of x: ";
    cin >> x;

    // Calculate and display the sum of the series
    for (int i = 0; i < n; i++) {
        sum += (i + 1) * pow(x, i);
    }

    cout << "Sum of the series 1 + 2x + 3x^2 + 4x^3 + 5x^4 is: " << sum << endl;

    return 0;
}

