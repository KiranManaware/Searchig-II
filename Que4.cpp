// There is an integer array nums sorted in non-decreasing order (not necessarily with
// distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k
// < nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1],
// nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example,
// [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become
// [4,5,6,6,7,0,1,2,4,4] .
// Given the array nums after the rotation and an integer target , return true if target is in
// nums , or false if it is not in nums .
// You must decrease the overall operation steps as much as possible.
// Example 1:
// Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true
#include<iostream>
#include <vector>
using namespace std;
bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=(hi+lo)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]==nums[lo] && nums[mid]==nums[hi]){
                hi--;
                lo++;
            }
            else if(nums[mid]<=nums[hi]){
                if(target>=nums[mid]&&target<=nums[hi])lo=mid+1;
                else hi=mid-1;
            }
            else{
                if(target<=nums[mid]&& target>=nums[lo]) hi=mid-1;
                else lo=mid+1;
            }
        } 
        return false;       
    }
int main()
{
    vector<int> v={2,5,6,0,0,1,2};
    int target=90;
    bool flag=search(v,target);
    if(flag) cout<<"true";
    else cout<<"false";
    return 0;
}