#include <iostream> 
using namespace std;
int decNum(int n){
    int a=0,d=n,c=1,ans=0;
    while (d>0) {
        a=d%2;
        d=d/2;
        ans+=a*c;
        c*=10;
        
    }
    return ans;
}
int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << decNum(n) << endl;
 }
 //g++ decToBinaryNumConv.cpp -o practice; .\practice.exe