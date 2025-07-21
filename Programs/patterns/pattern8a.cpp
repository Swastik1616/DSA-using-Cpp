#include<bits/stdc++.h>
using namespace std;

void pattern8a(int n){
    for(int i=n;i>=1;i--){
        //spaces
        for(int j=0;j<n-i;j++){
            cout << " ";
        }

        //stars
        for(int j=1;j<=2*i-1;j++){
            cout << "*" ;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern8a(n);
}