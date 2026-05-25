/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CANDYSTORE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        // your code goes here
        if(y<=x) cout << y*1 << endl;
        else cout << x*1 + (y-x)*2 << endl;
    }
	

}
