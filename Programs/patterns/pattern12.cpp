#include<bits/stdc++.h>
using namespace std;

void pattern12(int n){
    for(int i=1;i<=n;i++){
        //first triangle
        for(int j=1;j<=i;j++){
            cout << j;
        }

        //spaces
        for(int j=n+2;j>=0;j-=2){
            cout << "-";
        }

        //second triangle
        for(int j=1;j<=i;j++){
            cout << j;
        }
    }
}

int main(){
    int n;
    cin >> n;
    pattern12(n);
}