#include<bits/stdc++.h>
using namespace std;

void pattern18(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<=ch + i;ch++){
            cout << ch;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern18(n);
}