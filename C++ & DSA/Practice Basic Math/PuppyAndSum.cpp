// Problem Link - https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/PPSUM

#include <bits/stdc++.h>
using namespace std;


int newSum(int d, int n){
    int ans = (n*(n+1))/2;
    if(d==1) return ans;
    return newSum(d-1,ans);
}

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int d,n;
        cin >> d >> n;
        cout << newSum(d,n) << endl;
    }
}