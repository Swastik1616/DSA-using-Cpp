// Problem Link - https://www.codechef.com/practice/course/strings/STRINGS/problems/STRTONUM

#include <bits/stdc++.h>
using namespace std;

long long stringToNumber(const string& str) {   
    int n = str.size();
    long long ans = 0;
    for(int i=0;i<n;i++){
        ans = (ans*10) + (str[i]-'0');
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << stringToNumber(s) << "\n";
    }
    return 0;
}