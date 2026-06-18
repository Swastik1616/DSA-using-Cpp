// Problem Link - https://www.codechef.com/practice/course/strings/STRINGS/problems/TITLECASE

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while(t--) {
        string line;
        getline(cin, line); 
        
        stringstream ss(line); 
        string s;
        
        while(ss >> s) { 
            bool isAcronym = true;
            for(char ch : s) {
                if(ch >= 'a' && ch <= 'z') {
                    isAcronym = false;
                    break;
                }
            }
            
            if(!isAcronym) {
                if(s[0] >= 'a' && s[0] <= 'z') {
                    s[0] = 'A' + (s[0] - 'a');
                }
                
                for(int i = 1; i < s.size(); i++) {
                    if(s[i] >= 'A' && s[i] <= 'Z') {
                        s[i] = 'a' + (s[i] - 'A');
                    }
                }
            }
            
            cout << s << " ";
        }
        cout << "\n";
    }
    
    return 0;
}