/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CCHOCOLATES
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
	    int ans=5*x+10*y;
	    cout<<ans/z<<endl;
    }
	

}
