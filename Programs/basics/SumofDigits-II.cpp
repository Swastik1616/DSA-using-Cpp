/* Problem Link -
https://www.codechef.com/practice/course/cpp/LPCPAS14/problems/LCPPAS167?tab=statement
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;
        int sum = 0; 
        for (char ch : str) {
            if (ch >= '0' && ch <= '9') {
                sum += ch - '0'; // Convert character to integer and add to sum
            }
        }
        cout << sum << endl;
    }

    return 0;
}
