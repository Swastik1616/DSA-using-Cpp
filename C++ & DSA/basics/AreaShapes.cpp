/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/DIPEBA/problems/HQWZWJ35?tab=statement
*/
#include <iostream>
using namespace std;

// Function to calculate area of a circle (double)
double calculateArea(double radius) {
    return 3.14 * radius * radius;  // Area of circle: π * r^2
}

// Function to calculate area of a rectangle (double)
double calculateArea(double length, double width) {
    return length * width;  // Area of rectangle: length * width
}

// Function to calculate area of a triangle (float)
float calculateArea(float base, float height) {
    return 0.5 * base * height;  // Area of triangle: 0.5 * base * height
}

int main() {
    int choice;

    cin >> choice;

    if (choice == 1) {
        double radius;
        cin >> radius;
        cout << "Area of the circle: " << calculateArea(radius) << endl;
    } else if (choice == 2) {
        double length, width;
        cin >> length >> width;
        cout << "Area of the rectangle: " << calculateArea(length, width) << endl;
    } else if (choice == 3) {
        float base, height;
        cin >> base >> height;
        cout << "Area of the triangle: " << calculateArea(base, height) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
