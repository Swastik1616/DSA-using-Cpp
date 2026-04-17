/*
https://www.codechef.com/learn/course/cpp-development/PJGPVG/problems/IDNCJU11
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};  // Indices are 0, 1, 2, 3, 4

    // Method 1: Using []
    cout << "First element: " << numbers[0] << endl;   // Outputs: 10
    cout << "Third element: " << numbers[2] << endl;   // Outputs: 30

    // Method 2: Using .at()
    cout << "Second element: " << numbers.at(1) << endl; // Outputs: 20

    // Uncommenting the line below would cause an error (index out of range)
    // cout << "Invalid index: " << numbers.at(5) << endl;

    return 0;
}