#include<bits/stdc++.h>
using namespace std;

void pattern18b(int n){
    for(int i=1;i<=n;i++){
        char ch = 'A' + n -1;
        for(int j=1;j<=i;j++){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern18b(n);
}