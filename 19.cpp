#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int choice;
    double radius, result;

    // Display menu and get user's choice
    cout << "Choose an option:" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the circumference of a circle" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    // Check user's choice
    if (choice == 1) {
        // Input radius and calculate area
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        result = M_PI * pow(radius, 2); // Calculate area using pr^2 formula
        cout << "Area of the circle: " << result << endl;
    } else if (choice == 2) {
        // Input radius and calculate circumference
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        result = 2 * M_PI * radius; // Calculate circumference using 2pr formula
        cout << "Circumference of the circle: " << result << endl;
    } else {
        // Display an error message for an invalid choice
        cout << "Invalid choice! Please enter 1 or 2." << endl;
    }

    return 0;
}

