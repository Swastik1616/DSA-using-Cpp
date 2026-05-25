/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SCALENE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        // your code goes here
        if(a!=b && b!=c && a!=c) cout << "YES\n";
        else cout << "NO\n";
    }
	

}
