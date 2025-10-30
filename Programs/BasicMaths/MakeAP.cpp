/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/MAKEAP
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,c;
        cin>>a>>c;
        // you code goes here
        if((a+c)%2==0) cout << (a+c)/2 << endl;
        else cout << "-1\n";
    }

}
