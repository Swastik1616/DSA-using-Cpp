/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/CDXFDR/problems/CXZJMH01
*/

#include <iostream> 
using namespace std; 

class Demo {
public:  // Public access modifier: Members are accessible outside the class
    int x;  // Public variable: Can be accessed directly by objects of the class

    // Public method: Displays the value of 'x'
    void display() {
        cout << "Public variable x: " << x << endl;
    }
};

int main() { // Main function: Entry point of the program
    Demo obj;  // Create an object of class Demo
    
    obj.x = 10;  // Assign a value to public variable 'x' (direct access allowed)
    obj.display(); // Call the public method to display the value of 'x'
    
    return 0; 
}