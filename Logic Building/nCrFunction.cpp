#include <iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for (int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);
    int answer= fact_n/(fact_r*fact_nmr);
    return answer;

}
int main(){
    int n,r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    cout << "The answer is: "<< nCr(n,r) << endl;
    return 0;
}
//g++ nCrFunction.cpp -o practice; .\practice.exe