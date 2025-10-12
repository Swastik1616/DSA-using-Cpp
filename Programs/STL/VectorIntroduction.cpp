/* Problem Link -
https://www.codechef.com/learn/course/cpp-stl/CSTL01/problems/VECTORINTRO?tab=statement
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int x;
	        cin >> x;
	        v.push_back(x);
	    }
	    if(n%2 != 0 && n%3==0) cout << v[(n/2)] << endl;
	    else if(n%2 == 0 && n%3==0) cout << v[0] << " " << v[n-1] << endl;
	    else cout << v[0] + v[n-1] << endl;
	}

}
