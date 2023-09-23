#include <iostream>
using namespace std;

int main()
 {
    char ch;

    // Input a character
    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to lowercase for easy comparison
    ch = tolower(ch);

    // Check if it's a vowel or consonant using switch
    switch (ch) 
	{
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << ch << " is a vowel." << endl;
            break;
        default:
            cout << ch << " is a consonant." << endl;
            break;
    }

    return 0;
}

