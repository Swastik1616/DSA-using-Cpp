#include <stdio.h>

void countingSort(int a[],int n, int k){
    int c[k+1];
    int b[n];
    for(int i=0;i<=k;i++) c[i] = 0;
    for(int i=0;i<n;i++) c[a[i]]++;
    for(int i=1;i<=k;i++) c[i] += c[i-1];

    for(int i=n-1;i>=0;i--){
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }

    printf("\nThe Sorted array is: ");
    for(int i=0;i<n;i++) printf("%d ",b[i]);
}

int main() {
    int n,k;
    //printf("Enter the number of elements: ");
    scanf("%d",&n);

    //printf("\nEnter the value of k, it must be <=n: ");
    scanf("%d",&k);

    int a[n];
    //printf("\nEnter the array elements, they should be between 0 and k both inclusive: ");
    
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    
    printf("\nThe array you entered is: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);

    countingSort(a,n,k);
    return 0;
}