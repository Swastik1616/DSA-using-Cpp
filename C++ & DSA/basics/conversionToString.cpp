#include <iostream>     // For input and output
using namespace std;

int main() {
    int intValue = 42;                  // Integer value
    float floatValue = 3.14159;         // Float value
    double doubleValue = 2.718281;      // Double value

    string intString = to_string(intValue);         // Convert int to string
    string floatString = to_string(floatValue);     // Convert float to string
    string doubleString = to_string(doubleValue);   // Convert double to string

    cout << "Integer as string: " << intString << endl;
    cout << "Float as string: " << floatString << endl;
    cout << "Double as string: " << doubleString << endl;

    return 0;  // End of program
}