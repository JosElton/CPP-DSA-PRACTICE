#include <iostream> 
using namespace std;
int BinNum(int n){
    int a=0,d=n,c=1,ans=0;
    while (d>0) {
        a=d%10;
        ans+=a*c;
        d=d/10;
        c*=2;
        
    }
    return ans;
}
int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << BinNum(n) << endl;
    return 0;
 }
 //g++ BinaryToDecNumbConv.cpp -o practice; .\practice.exe