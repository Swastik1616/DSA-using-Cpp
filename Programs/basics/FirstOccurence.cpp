/* Problem Link -
https://www.codechef.com/practice/course/cpp/LPCPAS15/problems/LCPPAS129
*/

#include <iostream>
using namespace std;

int main() {
    // Write your code here
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i] == 8) {
            cout << i;
            break;
        }
    }
    return 0;
}