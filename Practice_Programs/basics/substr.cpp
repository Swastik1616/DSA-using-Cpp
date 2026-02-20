#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare a base string
    string str = "Hello, World!";

    // Extract substring with start index and length
    string subStr1 = str.substr(7, 5);
    cout << subStr1 << endl;
    // Extract substring from a specific start index to the end
    string subStr2 = str.substr(5);
    cout << subStr2 << endl;
    // Substring starting at 0 (entire string)
    string subStr3 = str.substr(0);
    cout << subStr3 << endl;
    // Substring of a single character
    string subStr4 = str.substr(4, 1);
    cout << subStr4 << endl;
    return 0;
}