#include <stdio.h>

void selectionSort(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int min_i = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_i]) min_i = j;
        }
        int temp = a[i];
        a[i] = a[min_i];
        a[min_i] = temp;
    }
}

int main() {
    int a[11]= { 3,1, 2 , 5, 2, 7 ,3 ,1,0,9,4};
    selectionSort(a,11);
    for(int i=0;i<11;i++){
        printf("%d ",a[i]);
    }
    return 0;
}