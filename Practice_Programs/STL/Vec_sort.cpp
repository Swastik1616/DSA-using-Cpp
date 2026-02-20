/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/EKSGLD/problems/NBLGGJ28
*/

#include <iostream>
#include <vector>
#include <algorithm>  // Required for sort()
using namespace std;

int main() {
    // Step 1: Initialize a vector of integers
    vector<int> numbers = {40, 10, 30, 20, 50};

    // Step 2: Display the vector before sorting
    cout << "Before sort: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Step 3: Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());

    // Step 4: Display the vector after sorting in ascending order
    cout << "After ascending sort: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Step 5: Sort the vector in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    // Step 6: Display the vector after sorting in descending order
    cout << "After descending sort: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
