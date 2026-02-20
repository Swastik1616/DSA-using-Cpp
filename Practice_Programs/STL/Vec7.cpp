/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/PJGPVG/problems/IDNCJU28
*/

#include <iostream>      // For input and output operations
#include <vector>        // To use the vector container
using namespace std;

int main() {
    vector<int> numbers;  // Declare an empty vector to store integers
    int value;            // Variable to temporarily store each user input

    // Keep taking input until the user enters -1
    while (true) {
        cin>>value;
        if(value!=-1)
        {
            numbers.push_back(value);  // Add the value to the end of the vector
            // The vector automatically grows with each new input
        }
        else{
            break;
        }
    }

    // Display all values stored in the vector
    cout << "You entered: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";  // Print each element in the vector
    }

    return 0;  // End of program
}
