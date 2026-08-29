#include <iostream>
using namespace std;
int fibonacciSeries(int n){
    int sum=0, a=1, b=0;
    if (n<=0){
        cout<< "Please enter a number greater than 0"<< endl;

        return 0;
    }
    if (n==1){
        return 1;
    }
    else {
    for (int i=0; i<n-1; i++){
        sum=a+b;
        b=a;
        a=sum;
        
        
    }
    return sum; }
}
int main(){
    int n;
    cout  << "Enter a number: ";
    cin >> n;
    cout << "The "<< n <<"th "<< "fibonacci term is: " << fibonacciSeries(n) << endl;
    return 0;
} 
//g++ FibonacciSeriesFunction.cpp -o practice; .\practice.exe