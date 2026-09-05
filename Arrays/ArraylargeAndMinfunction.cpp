#include <iostream>
using namespace std;
int main(){
    int size=6;
    int marks[]={5,15,22,1,-15,24};
    int index1,index2;
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for (int i=0;i<size;i++){
            largest=max(marks[i],largest);
            if (largest==marks[i]){
                index1=i;
            }
            smallest=min(marks[i],smallest);
            if (smallest==marks[i]){
                index2=i;
            }
    }
    cout << "largest: "<< largest << endl;
    cout << "smallest: " <<  smallest << endl; 
    cout << "largest index: "<< index1<< endl;
    cout << "smallest index: " << index2 << endl;
    return 0;
}
//g++ ArraylargeAndMinfunction.cpp -o practice; .\practice.exe