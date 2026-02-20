#include <iostream>
using namespace std;

// Overloaded function to calculate the area of a square
double calculateArea(double side) {
    return side * side;  // Area of square = side * side
}

// Overloaded function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;  // Area of rectangle = length * width
}

int main() {
    double side, length, width;

    // Get user input for square
    cin >> side;
    double squareArea = calculateArea(side);  // Call function to calculate square area
    cout << "Area of the square: " << squareArea << endl;

    // Get user input for rectangle
    cin >> length >> width;
    double rectangleArea = calculateArea(length, width);  // Call function to calculate rectangle area
    cout << "Area of the rectangle: " << rectangleArea << endl;

    return 0;
}
