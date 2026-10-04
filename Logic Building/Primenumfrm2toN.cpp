#include <iostream>
using namespace std;
int Primenum(int a){
    int sum=0;
    for (int i=2;i<a;i++){
        if (a%i==0){
        sum++;}
    }
    if (sum==0){
        cout << a << " "; 
    }
    return 0;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for (int i=3;i<=n; i++){
        Primenum(i);
    }
    return 0;
}
//g++ Primenumfrm2toN.cpp -o practice; .\practice.exe