#include <iostream>
using namespace std;

int main() 
{
    int product = 1;

    // Use a for loop to calculate the product of odd numbers
    for (int number = 1; number <= 10; number += 2)
	 {
        product *= number;
    }

    cout << "Product of odd numbers from 1 to 10: " << product << endl;

    return 0;
}

