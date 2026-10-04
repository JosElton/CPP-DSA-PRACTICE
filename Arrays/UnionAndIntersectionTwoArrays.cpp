#include <stdio.h>
int main(){
    int arr1[20], arr2[20], n1, n2, i;
    printf("Enter the number of elements in first array: ");
    scanf("%d",&n1);
    printf("Enter the elements to store for the first array: \n");
    for (i=0;i<n1;i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in second array: ");
    scanf("%d",&n2);
    printf("Enter the elements to store for the second array: \n");
    for (i=0;i<n2;i++){
        scanf("%d", &arr2[i]);
    }
    int unionArr[20], unionSize=0;
    for (int i = 0; i < n1; i++) {
        int alreadyExists = 0;
        for (int k = 0; k < unionSize; k++) {
            if (unionArr[k] == arr1[i]) {
                alreadyExists = 1;
                break;
            }
        }
        if (alreadyExists == 0) {
            unionArr[unionSize] = arr1[i];
            unionSize++;
        }
    }
    for (int i = 0; i < n2; i++) {
        int alreadyExists = 0;
        for (int k = 0; k < unionSize; k++) {
            if (unionArr[k] == arr2[i]) {
                alreadyExists = 1;
                break;
            }
        }
        if (alreadyExists == 0) {
            unionArr[unionSize] = arr2[i];
            unionSize++;
        }
    }
    int intersectArr[20], intersectSize=0;
    for (int i = 0; i < n1; i++) {
        int foundInArr2 = 0;
        // Check if arr1[i] is in arr2
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                foundInArr2 = 1;
                break;
            }
        }
        if (foundInArr2 == 1) {
            int alreadyAdded = 0;
            for (int k = 0; k < intersectSize; k++) {
                if (intersectArr[k] == arr1[i]) {
                    alreadyAdded = 1;
                    break;
                }
            }
            if (alreadyAdded == 0) {
                intersectArr[intersectSize] = arr1[i];
                intersectSize++;
            }
        }
    }
    printf("The union elements are: ");
    for (i=0; i<unionSize; i++){
        printf("%d  ", unionArr[i]);
    } 
    printf("The intersection elements are: ");
    for (i=0; i<intersectSize; i++){
        printf("%d  ",intersectArr[i]);
    }
    return 0;
}

