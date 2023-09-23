#include <iostream>
#include <cmath>
using namespace std;

int main() 

{
    double a, b, c;
    double s, area;

    // Input the lengths of the sides
    cout << "Enter the length of side a: ";
    cin >> a;

    cout << "Enter the length of side b: ";
    cin >> b;

    cout << "Enter the length of side c: ";
    cin >> c;

    // Calculate the semi-perimeter (s)
    s = (a + b + c) / 2.0;

    // Calculate the area using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the calculated area
    cout << "Area of the triangle: " << area << endl;

    return 0;
}
