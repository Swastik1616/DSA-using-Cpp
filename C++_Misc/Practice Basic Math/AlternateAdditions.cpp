// Problem Link - https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/ALTERADD

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int diff =  b - a;
        if(diff%3 == 2) cout << "NO\n";
        else cout << "YES\n";
    }
}