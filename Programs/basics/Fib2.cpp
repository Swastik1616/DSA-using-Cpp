// // Implementation of nth Fib using Recursion + Avoiding re-computations i.e. Dynamic Programming

// #include<bits/stdc++.h>
// using namespace std;

// int Fib (int n){
//     if(n<=1){
//         a[n]=1;
//         return 1;
//     }
//     else
//         return (Fib(n-1)+Fib(n-2));
// }
// int n;
// int a[n];
// int main(){
//     cin >> n;
//     for(int i = 0; i <= n; i++){
//         a[i] = -1;
//        // cout << a[i] << endl;
//     }
//     for(int i = 0; i <= n; i++){
//         a[i] = Fib(i);
//        // cout << a[i] << endl;
//     }

//     cout << "The value of " << n <<"th Fibonacci number is: " << a[n];
// }