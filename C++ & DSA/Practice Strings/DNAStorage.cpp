/* Problem Link -
https://www.codechef.com/practice/course/strings/STRINGS/problems/DNASTORAGE
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        // your code goes here
        if(n%2 == 0){
            for(int i=0;i<n;i+=2){
                if(s[i] == '0' && s[i+1] == '0') cout << "A";
                if(s[i] == '0' && s[i+1] == '1') cout << "T";
                if(s[i] == '1' && s[i+1] == '0') cout << "C";
                if(s[i] == '1' && s[i+1] == '1') cout << "G";
            }
        }
        cout << endl;
    }

}