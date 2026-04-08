#include<bits/stdc++.h>
using namespace std;

void pattern9b(int n){
    //upper triangle
        for(int i=1;i<n;i++){
        //space
        for(int j=n-1;j>=i;j--){
            cout << " ";
        }

        //stars
        for(int j=1;j<=2*i-1;j++){
            cout << j;
        }
        cout << endl;
    }

    //lower triangle
    for(int i=n;i>=1;i--){
        //spaces
        for(int j=0;j<n-i;j++){
            cout << " ";
        }

        //stars
        for(int j=1;j<=2*i-1;j++){
            cout << j ;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern9b(n);
}