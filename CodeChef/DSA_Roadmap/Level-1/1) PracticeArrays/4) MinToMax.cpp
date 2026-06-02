// Problem Link - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN

#include <bits/stdc++.h>
using namespace std;

int countNonMin(vector<int>& v) {
    sort(v.begin(),v.end());
    int m = v[0];
    int ans = 0;
    for(auto it:v){
        if(it!=m) ans++;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        cout << countNonMin(v) << "\n";
    }
    return 0;
}