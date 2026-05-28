// Problem Link - https://www.codechef.com/practice/course/strings/STRINGS/problems/HAPPYSTR

#include <bits/stdc++.h>
using namespace std;

string strMood(string s){
    int n = s.size();
    int c = 0;
    string ans = "";
    
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') c++;
        else c = 0;
        if(c>2){
            ans = "Happy";
            return ans;
        }
    }
    ans = "Sad";
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout << strMood(s) << "\n";
    }
}
