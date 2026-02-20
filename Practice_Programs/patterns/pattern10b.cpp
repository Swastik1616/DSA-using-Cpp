#include<bits/stdc++.h>
using namespace std;

void pattern10b(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << j ;
        }
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern10b(n);
}