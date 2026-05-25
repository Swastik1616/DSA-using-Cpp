/*Problem Link -
https://www.codechef.com/learn/course/cpp-development/ZPBYJM/problems/IHIWQS20
*/

#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int i = 0; // index for outer loop

    while (i < input.length()) {
        char ch = input[i];

        // check if character is a vowel (case-insensitive)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {

            int j = 0; // counter for inner loop
            while (j <= i) { // repeat character (i + 1) times
                cout << ch;
                j++;
            }
            cout << endl; // move to next line after each vowel
        }

        i++;
    }

    return 0;
}
