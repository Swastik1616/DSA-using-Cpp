/* Problem Link -
    https://www.codechef.com/learn/course/cpp-development/EKSGLD/problems/NBLGGJ03
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Step 1: Initialize a vector of integers
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the vector before inserting
    cout << "Before insert: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Step 3: Insert 25 at the second position (index 1)
    numbers.insert(numbers.begin() + 1, 25);  // Insert 25 between 10 and 20

    // Step 4: Display the vector after inserting
    cout << "After insert: ";
    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
