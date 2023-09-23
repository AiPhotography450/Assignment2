#include <iostream>
using namespace std;

int main() 
{
    int rows = 4; 

    int i = rows;
    do {
        int j = 1;
        do 
		{
            cout << i << " ";
            j++;
        } while (j <= i);
        cout << endl;
        i--;
    } while (i >= 1);

    return 0;
}

