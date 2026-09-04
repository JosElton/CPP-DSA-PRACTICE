#include <iostream>
using namespace std;
void intersection(int arr1[], int arr2[], int size1, int size2){
    for (int i=0;i<size1;i++){
        for (int j=0;j<size2;j++){
            if (arr1[i]==arr2[j]){
                cout << arr1[i] << "  ";
            }
        }
    }

}
int main() {
    int size1=7, size2=6;
    int arr1[]={1,2,3,8,1,2,3};
    int arr2[]={5,15,22,8,-15,24};
    intersection(arr1,arr2,size1,size2);
    return 0;
}
//g++ IntersectionOftwoArrays.cpp -o practice; .\practice.exe