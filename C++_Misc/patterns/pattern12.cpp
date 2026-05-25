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
        for(int j=1;j<=temp+2;j++){
            cout << " ";
        }
        temp-=2;

        //second triangle
        int k=i;
        for(int j=1;j<=i;j++){
            cout << k--;
        }       
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern12(n);
}
// ab tak ka best question maza aagayaa..logic in diary.