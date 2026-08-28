#include <iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for (int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int a;
    cout << "Enter the number: ";
    cin >> a;
    cout << "The factorial of the inputted number is: "<< fact(a);
    return 0;
}
//g++ factorialfunction -o practice; .\practice.exe