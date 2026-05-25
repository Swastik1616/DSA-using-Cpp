/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/EKSGLD/problems/NBLGGJ08
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Initialize a vector of integers
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the vector before removing an element
    cout << "Before remove: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Step 3: Remove the third element (index 2, value 30)
    numbers.erase(numbers.begin() + 2);  // Removes the element at index 2 (30)

    // Step 4: Display the vector after removing the element
    cout << "After remove: ";
    for (int i = 0; i < 4; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
