#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    cout << "Decimal: " << number << endl;
    cout << "Binary: ";
    
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--)
	 {
        int bit = (number >> i) & 1;
        cout << bit;
    }
    
    cout << endl;
    cout << "Octal: 0" << oct << number << endl;
    cout << "Hexadecimal: 0x" << hex << number << endl;

    return 0;
}

