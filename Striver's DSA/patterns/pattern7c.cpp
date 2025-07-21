#include<bits/stdc++.h>
using namespace std;

void pattern7c(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=n-1;j>=i;j--){
            cout << " ";
        }

        //stars
        for(int j=1;j<=2*i-1;j++){
            cout << i ;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern7c(n);
}