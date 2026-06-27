// Problem Link - https://www.codechef.com/practice/course/strings/STRINGSPRO/problems/CHN09

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ac=0,bc=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') ac++;
            else bc++;
        }
        cout << min(ac,bc) << "\n";
    }
}