#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cout << "Enter first number: " ;
    cin >> n1; 
    cout << endl <<"Enter second number: ";
    cin >> n2;
    //Convert any negative to positive number
    if (n1<0){n1=-n1;}
    if (n2<0){n2=-n2;}
    // Euclidean algorithm:
    while (n2!=0){
        int temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    cout << "The Greatest Common divisor of the given numbers is: "<< n1;
    return 0;
}