#include <stdio.h>

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int val = a[i];
        int pos = i;
        while(pos>0 && a[pos-1]>val){
            a[pos] = a[pos-1];
            pos--;
        }
        a[pos] = val;
    }
}

int main() {
    int a[11]= { 3,1, 2 , 5, 2, 7 ,3 ,1,0,9,4};
    insertionSort(a,11);
    for(int i=0;i<11;i++){
        printf("%d ",a[i]);
    }
    return 0;
}