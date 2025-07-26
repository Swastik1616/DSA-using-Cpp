#include<bits/stdc++.h>
using namespace std;

void pattern17(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=n-1;j>=i;j--){
            cout << "  ";
        }

        //chars first part
        for(char ch='A'; ch<'A'+i;ch++){
            cout << ch << " ";
        }

        //chars second part
        for(char ch='A'; ch<'A'+i-1;ch++){
            cout << ch-- << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern17(n);
}