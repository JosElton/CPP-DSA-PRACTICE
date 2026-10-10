#include <stdio.h>
int main(){
    int n, arr[10], i, sum=0, avg;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements to store:\n");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=sum/n;
    printf("Average of %d elements is %d",n,avg);
    return 0;
}
