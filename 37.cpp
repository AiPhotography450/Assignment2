#include <iostream>
using namespace std;

int main() 
{
    char alphabet;

    cout << "Alphabets from A to Z:" << endl;

    // Use a for loop to display alphabets
    for (alphabet = 'A'; alphabet <= 'Z'; alphabet++) 
	{
        cout << alphabet << " ";
    }

    cout << endl;

    return 0;
}

