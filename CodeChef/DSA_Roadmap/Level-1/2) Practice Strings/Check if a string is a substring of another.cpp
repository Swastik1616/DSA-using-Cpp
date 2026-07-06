// Problem Link - https://www.codechef.com/practice/course/strings/STRINGSPRO/problems/SUBSTRINGP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1;
        cin >> s2;
        int i = 0,j = 0, s = 0;
        while(i<s1.size() && j<s2.size()){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }
            else{
                s++;
                i = s;
                j=0;
            }
        }
        if(j==s2.size()) cout << "YES\n";
        else cout << "NO\n";
    }
}
