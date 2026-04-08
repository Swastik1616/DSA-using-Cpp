/* 
In this example, we demonstrate how to declare vectors in C++ 
and show that they are empty upon declaration 
and can be initialized later as needed.
*/

#include <iostream>  
#include <vector>    // Include the vector library for using vectors

using namespace std; 

int main() {
    vector<string> student_names;  // Vector to store names of students
    vector<int> student_ids;       // Vector to store student ID numbers
    vector<double> student_gpas;   // Vector to store student GPA scores
    vector<bool> is_enrolled;      // Vector to track whether a student is enrolled (true/false)

    cout << "Vectors for storing student data have been declared." << endl;
    cout << "student_names, student_ids, student_gpas, and is_enrolled are ready for use." << endl;
}
