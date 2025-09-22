/* Problem Link -
https://www.codechef.com/learn/course/cpp/LTCCPP22A/problems/PPSC87?tab=statement
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        count++;
        n = n / 10;
    }
    cout << count << endl;
}