#include <iostream>
using namespace std;

int main() 
{   int n,r,s=0,ans;
    cout << "Enter the number: "; 
    cin>> n;
    while (n>0){
        r=n%10;
        s+=r;
        n=n/10;
        if (n==0){
            if (s>9){
                n=s;
                s=0;
            }
            else {
                n=0;
                ans=s;
            }
        }
    }
    cout << "Generic root is: " << ans << endl;
    return 0;
}