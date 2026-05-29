// Problem Link - https://www.codechef.com/practice/course/strings/STRINGS/problems/BLOBBYVOLLEY
// phle poora logic & code pen paper se bnaya and fir implement -> AC -> maza agya

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
        
        int serve=0,a=0,b=0;
        for(int i=0;i<n;i++){
            if(serve%2==0 && s[i]=='A') a++;
            else if(serve%2!=0 && s[i]=='B') b++;
            else serve++;
        }
        
        cout << a << " " << b << "\n";
    }
}
