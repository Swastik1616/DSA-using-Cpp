/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/PMUVJW/problems/XBDKRF23
*/

#include <iostream>
using namespace std;

int main() {
    // Declare and initialize a 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},  // First row
        {4, 5, 6},  // Second row
        {7, 8, 9}   // Third row
    };

    // Step 1: Row-major order traversal (default in C++)
    cout << "Row-major Order:" << endl;
    for (int i = 0; i < 3; i++) {  // Outer loop for rows
        for (int j = 0; j < 3; j++) {  // Inner loop for columns
            cout << matrix[i][j] << " ";  // Access and print each element
        }
        cout << endl;  // Move to the next line after each row
    }

    // Step 2: Column-major order traversal
    cout << "Column-major Order:" << endl;
    for (int j = 0; j < 3; j++) {  // Outer loop for columns
        for (int i = 0; i < 3; i++) {  // Inner loop for rows
            cout << matrix[i][j] << " ";  // Access and print each element
        }
        cout << endl;  // Move to the next line after each column
    }

    return 0;
}