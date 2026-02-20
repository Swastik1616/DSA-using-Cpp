/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/EQUALISE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        float a,b;
        cin >> a >> b;
        float temp = 0.0;
        
        if(a>b) temp = a/b;
        else if(a<b) temp = b/a;
        else temp = a/b;
        
        while(temp!=1 && temp>1){
            temp /= 2.0;
        }
        
        if(temp == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}
