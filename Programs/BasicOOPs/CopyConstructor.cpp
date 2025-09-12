/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/DALKGF/problems/UXQHKH11
*/

#include <iostream>
using namespace std;

class Student {
public:
    string name;       // Variable to store student's name
    int rollNumber;    // Variable to store student's roll number

    // Default constructor to initialize name and roll number to default values
    Student() {
        name = "Unknown";  // Default name
        rollNumber = 0;    // Default roll number
    }
    
    // Copy constructor to create a copy of an existing Student object
    Student(const Student &s) {
        name = s.name;         // Copy the name from the original object
        rollNumber = s.rollNumber; // Copy the roll number from the original object
    }
};
int main() {
    // Creating an object student1 using the default constructor
    Student student1;  // student1's name and roll number are initialized to default values
    student1.name = "Alice";  // Assigning a custom name to student1
    student1.rollNumber = 101; // Assigning a custom roll number to student1

    // Creating a copy of student1 using the copy constructor
    Student student2 = student1;  // student2 is a copy of student1, so it gets the same values

    // Display details of student1
    cout << "Student 1 Name: " << student1.name << ", Roll Number: " << student1.rollNumber << endl;
    // Display details of student2
    cout << "Student 2 Name: " << student2.name << ", Roll Number: " << student2.rollNumber << endl;
    return 0;
}