/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/EKSGLD/problems/NBLGGJ13
*/

#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

int main() {
    // Step 1: Initialize a vector of numbers
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Step 2: Display the vector before finding an element using a normal for loop
    cout << "Before find: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Step 3: Use find() to search for the element 30
    auto it = find(numbers.begin(), numbers.end(), 30);

    // Step 4: Check if the element was found and print the result
    if (it != numbers.end()) {
        int index = it - numbers.begin();  // Calculate the index of the found element
        cout << "Element 30 found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
