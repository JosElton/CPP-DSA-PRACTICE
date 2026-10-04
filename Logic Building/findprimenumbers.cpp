#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number:";
    cin >> n;
    int sum=0;
    int count=1;
    int oddSum=0; 
    for (count; count*count<n; count++){
        if (n%count==0){
            sum++;
        }
    }
    if (sum<=1) {
    cout << "It is a prime number " << endl ;} 
    else { cout << "It is not a prime number";}
    return 0;
}












/*camel case example:
   int totalSum=0
   */



  /*int n;
    int count=1;
    int fact=1;
    cout<< "Enter a number:";
    cin >> n;
    while (count<=n){
        fact*=count;
        count++; // count++ means count+=1 also
    }
    cout << "The factorial is:"<< fact << endl;*/