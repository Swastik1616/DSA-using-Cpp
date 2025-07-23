#include<bits/stdc++.h>
using namespace std;

void pattern10c(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << i;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern10c(n);
}