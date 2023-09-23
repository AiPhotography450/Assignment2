#include <iostream>
using namespace std;

int main()
 {
    double fahrenheit, celsius;

    // Input temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Display the temperature in Celsius
    cout << "Temperature in Celsius: " << celsius << " °C" << endl;

    return 0;
}
