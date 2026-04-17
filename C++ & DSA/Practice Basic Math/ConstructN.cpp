/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/CONN
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int r1 = n-7;
        int r2 = n-2;
        if(n%2==0 || n%7==0 || (r1%2==0 && r1>=0)  || (r2%2==0 && r2>=0)) cout << "YES\n";
        else cout << "NO\n";
    }
}   
