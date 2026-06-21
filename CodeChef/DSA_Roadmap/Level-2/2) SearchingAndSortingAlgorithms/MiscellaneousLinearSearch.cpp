// Problem Link - https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH1/problems/SESO05

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin >> n;
    vector<pair<int,int>>v(n);
    
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    
    int a,b;
    cin >> a >> b;
    
    int c = 1;
    for(int i=0;i<n;i++){
        if((v[i].first==a && v[i].second==b) || (v[i].first==b && v[i].second==a)){
            c = 0;
            cout << "Yes\n";
            break;
        }
    }
    
    if(c) cout << "NO\n";
}
