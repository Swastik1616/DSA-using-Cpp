// Problem Link - https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/BALLBOX

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int minBoxes = (k*(k+1))/2;
        if(n<minBoxes) cout << "NO\n";
        else cout << "YES\n";
    }
}
