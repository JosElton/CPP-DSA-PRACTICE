#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int num[]={1,2,3,4,5,6,7,8};
    int n=8;
    int start=0; int target;int ans=false;
    int end=n-1;
    cout << "Enter number to find: "; 
    cin >> target;
    while (start<=end){
        int mid= start+ (end-start)/2;
        if (target>num[mid]){
            start=mid+1;
        }
        if (target<num[mid]){
            end=mid-1;
        }
        if (target==num[mid]){
            ans=true ;
            break;}
}
if (ans==true){
    cout << "number exists" << endl;
} 
else {cout << "number does not exist" << endl;
}
return 0;
}