/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/NEGPROD
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
        if(a*b<0 || b*c<0 || a*c<0) cout << "YES\n";
        else cout << "NO\n";
    }

}
