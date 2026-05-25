/* Problem Link -
https://www.codechef.com/practice/course/basic-math/BASICMATHPRO/problems/FLOW016
*/

#include <bits/stdc++.h>
using namespace std;

long long int CalGCD(long long int a,long long int b){
    long long int r;
    while(b>0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long int CalLCM(long long int a,long long int b,long long int gcd){
    return (a*b)/gcd;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,gcd,lcm;
        cin>>a>>b;
        
        if(a>=b) gcd = CalGCD(a,b);
        else gcd = CalGCD(b,a);
        
        lcm = CalLCM(a,b,gcd);
        
        cout << gcd << " " << lcm << endl;
    }
    
}
