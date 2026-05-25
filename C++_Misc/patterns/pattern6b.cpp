#include<bits/stdc++.h>
using namespace std;

void pattern6b(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern6b(n);
}