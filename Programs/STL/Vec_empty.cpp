/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/EKSGLD/problems/NBLGGJ18
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Initialize an empty vector
    vector<int> numbers;

    // Step 2: Check if the vector is empty
    if (numbers.empty()) {
        cout << "Vector is empty!" << endl;
    } else {
        cout << "Vector is not empty!" << endl;
    }

    // Step 3: Add an element to the vector
    numbers.push_back(10);

    // Step 4: Check again if the vector is empty
    if (numbers.empty()) {
        cout << "Vector is empty!" << endl;
    } else {
        cout << "Added an element. Now, the vector is not empty." << endl;
    }

    return 0;
}