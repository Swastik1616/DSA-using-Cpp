#include <stdio.h>

void bubbleSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int flag = 1;
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                flag = 0;
            }
        }
        printf("Pass %d : ",i+1);
        for(int i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
        if(flag) break;
    }
}

int main() {
    int a[4]= {4,3,2,1};
    bubbleSort(a,4);
    return 0;
}