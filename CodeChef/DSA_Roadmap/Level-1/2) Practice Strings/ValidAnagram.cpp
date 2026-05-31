// Problem Link - https://www.codechef.com/practice/course/strings/STRINGS/problems/VALIDANAGRAM

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(const string &s, const string &t) {
    if(s.size()!=t.size()) return false;
    
    map<char,int> sc,tc;
    for(char x:s) sc[x]++;
    for(char x:t) tc[x]++;
    
    if(sc==tc) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s,t;
    cin >> s;
    cin >> t;

    if(isAnagram(s,t)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}