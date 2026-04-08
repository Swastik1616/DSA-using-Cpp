/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/SEVENRINGS
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int res = n * x;
        if (res >= 10000 && res <= 99999) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

}
