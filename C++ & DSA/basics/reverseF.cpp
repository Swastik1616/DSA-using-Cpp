#include <iostream>     // For input and output
#include <algorithm>    // For reverse()
using namespace std;

int main() {
    string text = "codechef";               // Original string
    reverse(text.begin(), text.end());      // Reverse the string
    cout << "Reversed Text: " << text << endl;  // Display result
    return 0;  // End of program
}

/*reverse(startIterator, endIterator);
// Reverses elements from startIterator up to (but not including) endIterator

// Example: Partial reverse (first 5 characters)
reverse(str.begin(), str.begin() + 5);

// Example: Reverse from 3rd position to end
reverse(str.begin() + 2, str.end());*/