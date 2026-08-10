// https://www.codechef.com/DSAMONDAY015/problems/MXLED

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n;
    cin >> n;
    vector<pair<long long,long long>> v(n);
    for(auto &it:v) cin >> it.first >> it.second;
    vector<long long> pre1(n),pre2(n);
    pre1[0] = v[0].first;
    pre2[0] = v[0].second;
    for(int i=1;i<n;i++){
        pre1[i] = pre1[i-1] + v[i].first;
        pre2[i] = pre2[i-1] + v[i].second;
    }
    vector<long long> diff(n);
    int p = 0;
    long long ans = 0;
    for(int i=0;i<n;i++){
        int curr;
        if(pre1[i]>=pre2[i]){
            diff[i] = pre1[i]-pre2[i];
            curr = 1;
        }
        else {
            diff[i] = pre2[i]-pre1[i];
            curr = 2;
        }
        if(diff[i]>ans){
            ans = diff[i];
            p = curr;
        }
    }
    cout << p << " " << ans << "\n";
}