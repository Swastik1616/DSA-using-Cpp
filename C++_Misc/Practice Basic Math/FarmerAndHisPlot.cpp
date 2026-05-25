// Problem Link - https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/RECTSQ

#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m) {
    if (m == 0) {
        return n;
    }
    return gcd(m, n % m);
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int s = gcd(n,m);
        int ans = (n*m)/(s*s);
        cout << ans << endl;
    }
}