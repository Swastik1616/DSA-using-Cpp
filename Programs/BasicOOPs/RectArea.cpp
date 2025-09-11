/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/JMMMGV/problems/FFKWWT08
*/


#include <iostream>
using namespace std;

// Define a class Rectangle outside of main
class Rectangle {
public:
    int length;  // Attribute to store the length of the rectangle
    int width;   // Attribute to store the width of the rectangle
};

int main() {
    // Creating an object of class Rectangle
    Rectangle rect;

    // Accessing and modifying the object's attributes
    rect.length = 10;
    rect.width = 5;

    // Calculating and displaying the area directly
    int area = rect.length * rect.width;
    cout << "Area of the rectangle: " << area << " square units." << endl;

    return 0;
}

