#include <iostream>
using namespace std;

int main() 
{
    double salary;
    double netSalary;

    // Input salary
    cout << "Enter the salary: ";
    cin >> salary;

    // Check salary conditions and calculate net salary
    if (salary >= 20000) {
        // Deduct 7% for salary 20000 or more
        netSalary = salary - (0.07 * salary);
    } else if (salary >= 10000) {
        // Deduct 1000 for salary 10000 or more but less than 20000
        netSalary = salary - 1000;
    } else {
        // No deduction for salary less than 10000
        netSalary = salary;
    }

    // Display the net salary
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
