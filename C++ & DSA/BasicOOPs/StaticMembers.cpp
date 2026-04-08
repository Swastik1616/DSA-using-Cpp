/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/RWNCPF/problems/ADXSGJ08
*/

#include <iostream>
using namespace std;

class Employee {
public:
    static int employeeCount;  // Static variable to keep track of the number of employees

    // Static function to display the total number of employees
    static void displayEmployeeCount() {
        cout << "Total employees: " << employeeCount << endl;
    }

    // Static function to increment the employee count
    static void incrementEmployeeCount() {
        employeeCount++;  // Increment the static employeeCount
    }

    // Constructor to automatically call increment when an employee is created
    Employee() {
        incrementEmployeeCount();  // Increment the employee count every time an object is created
    }
};

// Initialize static variable outside the class
int Employee::employeeCount = 0;

int main() {
    // Creating Employee objects, employeeCount will automatically increment in constructor
    Employee emp1;
    Employee emp2;
    Employee emp3;

    // Displaying the total number of employees using the static function
    Employee::displayEmployeeCount();  // Output: Total employees: 3

    return 0;
}
