#include <iostream>
using namespace std;

int main() 
{
    int count = 1; 

    cout << "First five numbers and their squares:" << endl;

    while (count <= 5)
	 {
        cout << count << " squared is " << count * count << endl;
        count++; 
    }

    return 0;
}

