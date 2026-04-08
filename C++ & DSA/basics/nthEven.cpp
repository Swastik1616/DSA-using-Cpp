/*Problem Link -
https://www.codechef.com/learn/course/cpp-development/OTMUTR/problems/DITJJE45
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int number = 2;

    while (number <= 1000) {
        count++;
        if (count == n) {
            cout << number;
            break;
        }
        number += 2;
    }

    if (count < n) {
        cout << "nth even number is out of range.";
    }

    return 0;
}
