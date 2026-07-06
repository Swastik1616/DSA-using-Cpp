#include <bits/stdc++.h>
using namespace std;

void Merge(int a[],int low,int mid,int high){
    int b[high + 1];
    int i = low, j = mid + 1, k = low;
    while(i<=mid && j<=high){
        if(a[i]<=a[j]){
            b[k] = a[i];
            i++;
            k++;
        }
        else{
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
}

void MergeSort(int a[], int low, int high){
    if(low<high){
        int mid = (low + high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a[5] = {4,3,1,2,5};
    int n = sizeof(a)/sizeof(a[0]);
    int low = 0;
    int high = n - 1;
    MergeSort(a,low,high);
    for(int i=0;i<n;i++) cout << a[i] << " ";
    return 0;
}