#include <iostream>
using namespace std;

int main() 
{
    double temperature;

    // Input temperature
    cout << "Enter the temperature: ";
    cin >> temperature;

    // Determine and display the message based on temperature
    if (temperature > 35) 
	{
        cout << "Hot Day" << endl;
    } else if (temperature >= 25 && temperature <= 35)
	 {
        cout << "Pleasant Day" << endl;
    } else {
        cout << "Cool Day" << endl;
    }

    return 0;
}

