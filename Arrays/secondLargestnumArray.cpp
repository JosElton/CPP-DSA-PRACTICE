#include <stdio.h>
int main(){
    int n, arr[20],i,largest=0,secondlargest=0 ;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements to store:\n");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++){
        if (arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if (arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    printf("Second largest element is: %d", secondlargest);
    return 0;
}

