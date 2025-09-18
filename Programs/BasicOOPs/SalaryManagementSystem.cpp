/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/CDXFDR/problems/CXZJMH15?tab=statement
*/

#include <iostream>
using namespace std;

class Employee {
private:
    double salary;  // Private variable: Stores employee salary

public:
    // Setter method to set the initial salary
    void setSalary(double baseSalary) {
        salary = baseSalary;
    }

    // Setter method to apply a bonus using the `+` operator
    void applyBonus(double bonusAmount) {
        salary += bonusAmount;  // Adds bonus to salary
    }

    // Setter method to deduct a tax using the `-` operator
    void deductTax(double taxAmount) {
        salary -= taxAmount;  // Deducts tax from salary
    }

    // Method to display salary details
    void showSalary() {
        cout << "Final Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;  // Creating an Employee object
    double baseSalary, bonus, tax;

    // Taking user input for salary details
    cin >> baseSalary;

    cin >> bonus;

    cin >> tax;

    // Updating salary using setter methods
    emp.setSalary(baseSalary);
    emp.applyBonus(bonus);
    emp.deductTax(tax);

    emp.showSalary();  // Displaying updated salary

    return 0;
}
