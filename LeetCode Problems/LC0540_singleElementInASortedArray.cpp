#include <iostream>
#include <vector> 
class solution {
    public: 
       int singleNonDuplicate(vector<int>&nums){
        int start=0, end=nums.size()-1, n=nums.size();
        if(n==1){return nums[0];}
        while (start<=end){
            int mid= start+(end-start)/2;
            if (mid==0 && nums[mid]!=nums[mid+1]){return nums[mid];}
            if (mid==n-1 && nums[mid]!=nums[mid-1]){return nums[mid];} 
            if (nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            //even case:
            else if (mid%2==0){
                if (nums[mid]==nums[mid-1]){  // answer exists at left side
                    end=mid-1;  
                }
                else {                         // answer exists at right side
                    start=mid+1;
                } 
            }
            // odd case:
            else {
                if (nums[mid]==nums[mid-1]){  // answer exists at right side 
                    start=mid+1;
                }
                else {                         // answer exists at left side 
                    end=mid-1;
                }
            }
        }
        return -1;
       }
}