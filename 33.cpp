#include <iostream>
using namespace std;

int main() 
{
    int start, end;

    // Input starting and ending points
    cout << "Enter the starting point: ";
    cin >> start;

    cout << "Enter the ending point: ";
    cin >> end;

    cout << "Odd numbers in the range " << start << " to " << end << ":" << endl;

    // Use a do-while loop to find and display odd numbers
    if (start % 2 == 0)
	 {
        start++; // If the starting point is even, increment it to make it odd
    }

    do 
	{
        cout << start << " ";
        start += 2; // Increment by 2 to move to the next odd number
    } while (start <= end);

    cout << endl;

    return 0;
}

