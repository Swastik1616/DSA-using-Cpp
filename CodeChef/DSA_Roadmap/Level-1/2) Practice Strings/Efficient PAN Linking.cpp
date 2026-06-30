// Problem Link - https://www.codechef.com/practice/course/strings/STRINGS/problems/EPANLNK

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // your code goes here
        int n = s.size();
        if(n==1) cout << s[0] - '0' << "\n";
        else{
            int last2 = (s[n-2] - '0') * 10 + (s[n-1] - '0');
            cout << last2 % 20 << "\n";            
        }

    }
}
