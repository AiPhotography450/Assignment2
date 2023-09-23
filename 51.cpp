#include <iostream>
using namespace std;

int main() 
{
    int rows = 5; // Number of rows in the block
    int cols = 5; // Number of columns in the block

    for (int i = 1; i <= rows; i++) 
	{
        for (int j = 1; j <= cols; j++)
		 {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

