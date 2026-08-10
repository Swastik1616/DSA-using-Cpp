// https://www.codechef.com/DSAMONDAY015/problems/MXWC

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(auto &it:v) cin >> it;
    long long ans = 0;
    // for(int i=0;i<n;i++){
    //     long long curr;
    //     for(int j = i+1;j<n;j++){
    //         curr = (j-i)*min(v[i],v[j]);
    //         ans = max(ans,curr);
    //     }
    // }
    int i = 0, j = n-1;
    while(i<j){
        long long curr = min(v[i],v[j]) * (j-i);
        ans = max(ans,curr);
        if(v[i]<v[j]) i++;
        else j--;
    }
    cout << ans << "\n";
}