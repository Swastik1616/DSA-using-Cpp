#include <iostream>
#include <algorithm> // Includes reverse() method
using namespace std;

int main() {
    // Declare and initialize a string
    string text = "ABCDEFGH";

    // Calculate the midpoint of the string
    int mid = text.length()/2;
    
    // Reverse the second half of the string using arithmetic operators
    reverse(text.begin()+mid,text.end());

    // Print the modified string
    cout << "String with reversed second half: " << text << endl;

    return 0;
}
