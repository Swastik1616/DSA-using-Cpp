/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/CDXFDR/problems/CXZJMH01B
*/

#include <iostream>
using namespace std;

// Define a class named Demo
class Demo {
private:  
    int x;  // Private variable: Can’t be accessed directly outside this class

public:  
    // Constructor initializes the private variable 'x' at object creation
    Demo(int value) {
        x = value;
    }

    // Function within the class that accesses private members
    void displayValue() {
        cout << "Private variable x: " << x << endl;
    }
};

int main() {
    Demo obj(20);  // Creating object with initial value

    obj.displayValue();  // Access private member indirectly via internal method

    // cout << obj.x;  This would cause an error because 'x' is private

    return 0;
}