#include <bits/stdc++.h>
using namespace std;

int bruteforce(int a[], int n){
    int inv = 0;
    for(int i=0;i<n;i++){
        for(int j = i + 1; j < n; j++){
            if(a[i]>a[j]) inv++;
        }
    }
    return inv;
}

int Merge(int a[],int low,int mid,int high){
    int b[high + 1];
    int i = low, j = mid + 1, k = low;
    int inv = 0;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            b[k] = a[i];
            i++;
            k++;
        }
        else{
            inv += mid - i + 1;
            b[k] = a[j];
            j++;
            k++;
        }
    }
    if(i>mid){
        for(int x = j;x<=high;x++){
            b[k] = a[x];
            k++;
        }
    }
    else{
        for(int x = i;x<=mid;x++){
            b[k] = a[x];
            k++;
        }       
    }
    for(int x = low; x<= high; x++){
        a[x] = b[x];
    }
    return inv;
}

int InvCount(int a[], int low, int high){
    int total_inv = 0;
    if(low<high){
        int mid = (low + high)/2;
        total_inv += InvCount(a,low,mid);
        total_inv += InvCount(a,mid+1,high);
        total_inv += Merge(a,low,mid,high);
    }
    return total_inv;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[] = {3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout << bruteforce(a,n) << "\n";
    cout << InvCount(a,0,n-1);
    
    return 0;
}