/*stoi() converts a string to an int.
stof() converts a string to a float.*/
#include <iostream>     // For input and output
using namespace std;

int main() {
    string intString = "42";      // String representing an integer
    string floatString = "3.14";  // String representing a float

    int number = stoi(intString);     // Convert to int
    float decimal = stof(floatString); // Convert to float

    cout << "Integer: " << number << endl;
    cout << "Float: " << decimal << endl;

    return 0;  // End of program
}