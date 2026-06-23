// Problem Link - https://www.codechef.com/practice/course/strings/STRINGSPRO/problems/LAPIN

#include <bits/stdc++.h>
using namespace std;

bool isLapindrome(string s){
    map<char,int> m1,m2;
    int n = s.size();
    if(n&1){
        int i = 0;
        for(;i<n/2;i++) m1[s[i]]++;
        i++;
        for(;i<n;i++) m2[s[i]]++;
    }
    else{
        int i = 0;
        for(;i<n/2;i++) m1[s[i]]++;
        for(;i<n;i++) m2[s[i]]++;
    }
    if(m1==m2) return true;
    return false;
}

int main() {

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(isLapindrome(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}