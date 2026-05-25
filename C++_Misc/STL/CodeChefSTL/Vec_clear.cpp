/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/EKSGLD/problems/NBLGGJ23
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Initialize a vector of integers
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the vector before clearing using a normal for loop
    cout << "Before clear: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Step 3: Clear the vector
    numbers.clear();

    // Step 4: Check if the vector is empty
    if (numbers.empty()) {
        cout << "After clear: The vector is empty." << endl;
    }

    return 0;
}
