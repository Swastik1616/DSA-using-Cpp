#include<bits/stdc++.h>
using namespace std;

void pattern19(int n){
    //upper half
    for(int i=n;i>=1;i--){
        //stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        //spaces
        for(int j=0;j<2*(n-i);j++){
            cout << " ";
        }
        //stars
         for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    //lower half
    for(int i=1;i<=n;i++){
        //stars
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        //spaces
        for(int j=2*(n-i);j>0;j--){
            cout << " ";
        }
        //stars
         for(int j=1;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern19(n);
}