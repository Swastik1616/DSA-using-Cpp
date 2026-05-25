#include<bits/stdc++.h>
using namespace std;

void pattern13(int n){
    int count = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern13(n);
}
// abtak ka best question..maza aagyaa.
// i=1,j=1,count=1,2
// i=2,j=1,count=2,3 -- j=2, count=3,4...