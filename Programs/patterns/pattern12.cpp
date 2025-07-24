#include<bits/stdc++.h>
using namespace std;

void pattern12(int n){
    int temp=n;
    for(int i=1;i<=n;i++){
        //first triangle
        for(int j=1;j<=i;j++){
            cout << j;
        }
        //spaces
        for(int j=i;j<=(2*temp)-2;j++){
            cout << "-";
        }
        cout << endl;
    }
    temp-=2;
}

int main(){
    int n;
    cin >> n;
    pattern12(n);
}