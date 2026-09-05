#include <iostream>
using namespace std;
void uniquearr(int arr[], int size){
    for (int i=0;i<size;i++){
        int count=0;
        for (int j=0;j<size;j++){
            if (arr[i]==arr[j]){
                count+=1;
            }
        }
        if (count==1){
            cout << arr[i] << "  " ;
        }
    }
}
int main(){
    int size=7;
    int arr[]={1,2,3,4,1,2,3};   
    uniquearr(arr,size);
    return 0;
}
//g++ UniqueNumfromArray.cpp -o practice; .\practice.exe