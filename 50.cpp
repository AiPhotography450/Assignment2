#include <iostream>
using namespace std;

int main() 
{
    int rows = 7;

    for (int i = rows; i >= 1; i--) 
	{
        int j = 1;
        while (j <= i) 
		{
            cout << "*";
            j++;
        }
        cout << endl;
    }

    return 0;
}

