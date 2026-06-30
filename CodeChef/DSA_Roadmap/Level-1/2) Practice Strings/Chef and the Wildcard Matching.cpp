// Problem Link - https://www.codechef.com/practice/course/strings/STRINGS/problems/TWOSTR

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin >> x >> y;
        int c = 0;
        for(int i=0;i<x.size();i++){
            if(x[i]==y[i] || x[i]=='?' || y[i]=='?') continue;
            else{
                c = 1;
                break;
            }
        }
        
        if(c) cout << "NO\n";
        else cout << "YES\n";
    }
}