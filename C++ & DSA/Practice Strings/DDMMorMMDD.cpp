// Problem Link - https://www.codechef.com/practice/course/strings/STRINGS/problems/DDMMORMMDD

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        // your code goes here
        int d = (s[0] - '0') * 10 + (s[1] - '0');
        int m = (s[3] - '0') * 10 + (s[4] - '0');
        
        //cout << d << " " << m << "\n";
        if(1<=d && d<=12 && 1<=d && d<=31 && 1<=m && m<=12 && 1<=m && m<=31) cout << "BOTH\n";
        else if(1<=d && d<=31 && 1<=m && m<=12) cout << "DD/MM/YYYY\n";
        else cout << "MM/DD/YYYY\n";
    }

}
