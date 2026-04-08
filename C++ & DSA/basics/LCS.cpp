//One use case of LCS - succesfull.
// Radhe Radhe

#include<bits/stdc++.h>
using namespace std;

int LCS(char * p1, char * p2,int n, int m){
    if(n==0 or m==0){
        return 0;
    }
    else if(p1[n-1]==p2[m-1]){
        return 1 + LCS(p1,p2,n-1,m-1);
    }
    else{
        return max(LCS(p1,p2,n,m-1),LCS(p1,p2,n-1,m));
    }
}

int main(){
    int n=5,m=6;
    char arr1[n]={'a','c','b','e','d'};
    char arr2[m]={'f','c','b','e','a','d'};
    char *p1 = arr1;
    char *p2 = arr2;
    int res=LCS(p1,p2,n,m);
    cout << res;
}