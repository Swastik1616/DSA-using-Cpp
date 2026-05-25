// Implementation of nth Fib using Recursion + Avoiding re-computations i.e. Dynamic Programming

#include<bits/stdc++.h>
using namespace std;

int Fib (int n,int *p){
    if(n<=1){   // if n=0 or 1 base condition
        p[n]=1;
        return 1;
    }
    // if n>1
    else{ 
        if(p[n-1]==-1){ //if this is true it means fib of this call has not come yet
            p[n-1]=Fib(n-1,p); // so we call it now
        }
        if(p[n-2]==-1){ //if this is true it means fib of this call has not come yet
            p[n-2]=Fib(n-2,p); // so we call it now
        }
        p[n]=p[n-1] + p[n-2]; 
        return p[n];
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    int *p = a; // for call by reference
    //initialising the array
    for(int i = 0; i <= n; i++){
        a[i] = -1;
       // cout << a[i] << endl;
    }
    Fib(n,a);

    //printing
    cout << "The Fibonacci series upto Fib[" << n <<"] is: " << endl;
    for(int i = 0; i <= n; i++){
       cout << a[i] << " ";
    }
    cout << endl << "And the value of " << n <<"th Fibonacci number is: " << a[n];
}