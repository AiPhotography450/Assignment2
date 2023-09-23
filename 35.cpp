#include <iostream>
using namespace std;

int main() 
{
    int n = 1;
    int powerOfTwo = 1;

    while (n <= 7)
	 {
        cout << n << "\t" << powerOfTwo << endl;
        n++;
        powerOfTwo *= 2;
    }

    return 0;
}

