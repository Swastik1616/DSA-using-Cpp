// Implementation of nth Fib using Recursion

#include<bits/stdc++.h>
using namespace std;

int Fib (int n){
    if(n<=1)
        return 1;
    else
        return (Fib(n-1)+Fib(n-2));
}

int main(){
    int n;
    cin >> n;
    cout << "The value of " << n <<"th Fibonacci number is: " << Fib(n);
}