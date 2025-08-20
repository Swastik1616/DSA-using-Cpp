/* Problem Link -
https://www.codechef.com/learn/course/cpp-development/DIPEBA/problems/HQWZWJ40?tab=statement
*/

#include <iostream>
using namespace std;

// Recursive function to calculate the sum of digits
int sumOfDigits(int n) {
    // Base case: when n becomes 0, return
    if (n == 0) {
        return 0;
    }
    
    // Add the last digit of n to sum
    int digit = n % 10;
    
    // Recursive call with n reduced by removing the last digit
    return digit + sumOfDigits(n / 10);
}

int main() {
    int number;
    
    // Take input from the user
    cin >> number;
    
    // Check if the input is valid
    if (number <= 0) {
        cout << "Invalid input. Please enter a positive number." << endl;
    } else {
        // Call the recursive function to calculate the sum of digits
        int ans = sumOfDigits(number);
        cout << "Sum of digits: " << ans << endl;
    }
    
    return 0;
}
