/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW006
*/

#include <bits/stdc++.h>
using namespace std;

void sum(int n){
    int temp = n;
    int res = 0;
    while(n!=0){
        res += n%10;
        n /= 10;
    }
    cout << res << endl;
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        sum(n);
    }
}