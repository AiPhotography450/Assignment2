#include <iostream>
using namespace std;

int main()
 {
    int rows = 6; 

    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j <= i; j++) 
		{
            cout << j;
        }
        cout << endl;
    }

    return 0;
}

