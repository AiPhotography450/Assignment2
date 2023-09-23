#include <iostream>
using namespace std;

int main() 
{
    int tableNumber, tableLength;

    cout << "Enter the table number: ";
    cin >> tableNumber;

    cout << "Enter the length of the table: ";
    cin >> tableLength;

    cout << "Table of " << tableNumber << " (up to " << tableLength << " terms):" << endl;
    
    for (int i = 1; i <= tableLength; i++) 
	{
        cout << tableNumber << " x " << i << " = " << tableNumber * i << endl;
    }

    return 0;
}

