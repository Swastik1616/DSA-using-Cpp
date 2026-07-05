// Problem Link - https://www.codechef.com/practice/course/strings/STRINGSPRO/problems/ERROR

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        bool found = false;
        
        if (n>=3) {
            for (int i=0;i<=n-3;i++) {
                if ((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || 
                    (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')) {
                    found = true;
                    break;
                }
            }
        }
        
        if (found) cout << "Good" << endl;
        else cout << "Bad" << endl;
    }
    
    return 0;
}