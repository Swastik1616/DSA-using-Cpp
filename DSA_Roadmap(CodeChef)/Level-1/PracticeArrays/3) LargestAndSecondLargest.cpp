// Problem Link - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int lpos = max_element(a.begin(), a.end()) - a.begin();
        int l = a[lpos];
        
        for(auto &it:a) if(it==l) it=0; // to handle duplicates
        
        int slpos = max_element(a.begin(), a.end()) - a.begin();
        int sl = a[slpos];
        
        cout << l + sl << "\n";
    }
}
