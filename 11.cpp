#include <iostream>
using namespace std;

int main()
 {
    double miles, kilometers;
    const double MILES_TO_KILOMETERS = 1.609; // Conversion factor

    // Input miles
    cout << "Enter distance in miles: ";
    cin >> miles;

    // Convert miles to kilometers
    kilometers = miles * MILES_TO_KILOMETERS;

    // Display the result
    cout << "Distance in kilometers: " << kilometers << " km" << endl;

    return 0;
}
