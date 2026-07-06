// Problem Link - https://www.codechef.com/practice/course/strings/STRINGSPRO/problems/PLAYPIAN

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        bool found = false;
        for(int i=0;i<s.size()-1;i+=2){
            if((s[i]=='A' && s[i+1]=='A') || (s[i]=='B' && s[i+1]=='B')){
                found = true;
                break;
            }   
        }
        if(found) cout << "NO\n";
        else cout << "YES\n";
    }
}
