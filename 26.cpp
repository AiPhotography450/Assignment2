#include <iostream>
using namespace std;

int main() 
{
    int count = 1;    
    int sum = 0;  

    cout << "First ten numbers and their sum:" << endl;

    while (count <= 10) 
	{
        cout << count << " ";  
        sum += count;          
        count++;          
    }

    cout << endl;
    cout << "Sum of the first five numbers: " << sum << endl;

    return 0;
}

