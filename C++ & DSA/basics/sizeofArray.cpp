#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int ages[] = {25, 30, 35, 40, 45};  // Array of 5 integers

    // Calculate and print the total size of the array
    cout << "Size of the entire array: " << sizeof(ages) << " bytes" << endl;

    // Calculate and print the size of one element of the array
    cout << "Size of one element: " << sizeof(ages[0]) << " bytes" << endl;

    // Calculate and print the number of elements in the array
    int numElements = sizeof(ages) / sizeof(ages[0]);
    cout << "Number of elements in the array: " << numElements << endl;

    return 0;
}