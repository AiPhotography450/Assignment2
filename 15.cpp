#include <iostream>
using namespace std;

int main() 
{
    double salary, bonus = 0;
    int grade;

    // Input salary
    cout << "Enter the salary: ";
    cin >> salary;

    // Input grade
    cout << "Enter the grade: ";
    cin >> grade;

    // Calculate bonus based on grade
    if (grade > 15) {
        // 50% bonus for grade > 15
        bonus = 0.5 * salary;
    } else if (grade <= 15) {
        // 25% bonus for grade <= 15
        bonus = 0.25 * salary;
    }

    // Calculate and display the updated salary
    double updatedSalary = salary + bonus;
    cout << "Updated Salary: " << updatedSalary << endl;

    return 0;
}
