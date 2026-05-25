/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/CDXFDR/problems/CXZJMH01C
*/

#include <iostream>
using namespace std;

// Base class (Parent)
class Parent {
protected:
    int x;  // Protected variable

public:
    Parent(int value) {
        x = value;
    }
};

// Derived class (Child) that is connected to Parent using inheritance
class Child : public Parent {
public:
    // Constructor passes value to Parent's constructor
    Child(int value) : Parent(value) {}

    // Method to display protected variable x
    void display() {
        cout << "Accessing protected x from Child: " << x << endl;
    }
};

int main() {
    Child obj(50);     // Create object of Child class
    obj.display();     // Access protected member from Parent class using Child method

    return 0;
}
