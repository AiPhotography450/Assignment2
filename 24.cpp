#include <iostream>
using namespace std;

int main() 
{
    double num1, num2, result;
    char op;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Input the arithmetic operator
    cout << "Enter an arithmetic operator (+, -, *, /): ";
    cin >> op;

    // Perform arithmetic operation using switch
    switch (op) 
	{
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) 
			{
                result = num1 / num2;
            } else 
			{
                cout << "Division by zero is not allowed." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Invalid operator entered." << endl;
            return 1; 
    }

    // Display the result
    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}

