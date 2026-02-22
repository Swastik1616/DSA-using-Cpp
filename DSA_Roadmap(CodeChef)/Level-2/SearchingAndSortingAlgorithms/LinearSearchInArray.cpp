// https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH1/problems/SESO03?tab=statement

#include <iostream>
using namespace std;

int main() {
    int n, k;

    // Read the length of the array
    cin >> n;
    
    // Read the element to search for
    cin >> k;

    // Read the array elements
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    // Initialize a flag to indicate if the element is found
    bool found = false;

    // Use a for loop to search for the element in the array
    for (int i = 0; i < n; ++i) {
        if (array[i] == k) {
            found = true;
            break;
        }
    }

    // Print the result
    if (found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
