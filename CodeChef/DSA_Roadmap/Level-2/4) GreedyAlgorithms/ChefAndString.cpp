// Problem Link - https://www.codechef.com/learn/course/greedy-algorithms/LIGRDSA01/problems/XYSTRP

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 0;
        for(int i=0;i<s.size()-1;i++){
            if((s[i]=='x' && s[i+1]=='y') || (s[i]=='y' && s[i+1]=='x')){
                ans++;
                i++;
            }
        }
        cout << ans << "\n";
    }
}