#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int>vec={0,1,2,3,4,5,6};
    int n;
    cout << "Enter the number to search: ";
    cin >> n;
    int size=vec.size();
    for (int i=0;i<size;i++){
        if (vec[i]==n){
            cout << "The number was found at index: " << i;
        }
    }

    return 0;
} 
//g++ practice.cpp -o practice; .\practice.exe