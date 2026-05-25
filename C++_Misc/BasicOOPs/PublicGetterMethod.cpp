/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/CDXFDR/problems/CXZJMH08
*/

#include <iostream>
using namespace std;

class Student {
private:
    string name;     // Student's name
    string favoriteSubject;  // Favorite subject

public:
    // Constructor to initialize name and favorite subject
    Student(string studentName, string favSubject) {
        name = studentName;
        favoriteSubject = favSubject;
    }

    // Public getter method to return the favorite subject
    string getFavoriteSubject() {
        return favoriteSubject;
    }
    string getName() {
        return name;
    }
};

int main() {
    string studentName, favoriteSubject;

    // Taking input for student's name and favorite subject
    //cout << "Enter student's name: ";
    getline(cin, studentName);

    //cout << "Enter student's favorite subject: ";
    getline(cin, favoriteSubject);

    // Create Student object with user-provided data
    Student student(studentName, favoriteSubject);

    // Display the favorite subject using the getter method
    cout << student.getFavoriteSubject() << " is the favorite subject of " << student.getName() << endl;

    return 0;
}