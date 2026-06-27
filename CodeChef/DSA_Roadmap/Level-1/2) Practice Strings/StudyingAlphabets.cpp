// Problem Link - https://www.codechef.com/practice/course/strings/STRINGSPRO/problems/ALPHABET

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    map<char,int> mp;
    string s;
    cin >> s;
    for(auto it:s) mp[it]++;
    int n;
    cin >> n;
    while(n--){
        string s2;
        int c = 0;
        cin >> s2;
        for(int i=0;i<s2.size();i++){
            if(mp.find(s2[i])==mp.end()){
                c = 1;
                break;
            }
        }
        if(c) cout << "No\n";
        else cout << "Yes\n";
    }
}
