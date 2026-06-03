#include <stdio.h>

void bubbleSort(int a[],int n){
    for(int i=0;i<n;i++){
        int flag = 1;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                flag = 0;
            }
        }
        if(flag) break;
    }
}

int main() {
    int a[11]= { 3,1, 2 , 5, 2, 7 ,3 ,1,0,9,4};
    bubbleSort(a,11);
    for(int i=0;i<11;i++){
        printf("%d ",a[i]);
    }
    return 0;
}