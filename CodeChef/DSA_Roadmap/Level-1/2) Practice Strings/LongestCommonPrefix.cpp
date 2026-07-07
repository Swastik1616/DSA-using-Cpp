// Problem Link - https://www.codechef.com/practice/course/strings/STRINGSPRO/problems/LONGESPREFIX

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(const vector<string>& strs) {
    if (strs.empty()) return "";
    int n = (int)strs.size();
    int minLen = INT_MAX;
    for (const string &s : strs) minLen = min(minLen, (int)s.size());
    if (minLen == 0) return ""; // one string empty -> no prefix

    string res;
    res.reserve(minLen);
    for (int i = 0; i < minLen; ++i) {
        char c = strs[0][i];
        for (int j = 1; j < n; ++j) {
            if (strs[j][i] != c) return res;
        }
        res.push_back(c);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<string> v(n);
    for(auto &it:v) cin >> it;
    cout << longestCommonPrefix(v);
    return 0;
}
