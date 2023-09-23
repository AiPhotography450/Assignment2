#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) 
{
    if (n <= 1) 
	{
        return false; 
    }

    if (n == 2) 
	{
        return true; 
    }

    if (n % 2 == 0) 
	{
        return false; 
    }

    for (int i = 3; i <= sqrt(n); i += 2) 
	{
        if (n % i == 0) 
		{
            return false; 
        }
    }

    return true; 
}

int main() 
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Prime numbers less than " << number << " are:" << endl;

    for (int i = 2; i < number; i++) 
	{
        if (isPrime(i)) 
		{
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

