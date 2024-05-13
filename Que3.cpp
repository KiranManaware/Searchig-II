// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.
// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: true
// Example 2:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
// Output: false
#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int m=3;//rows
    int n=4;//colums
    int target=13;
    bool flag=true;
    for(int i=0;i<m;i++){
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[i][mid]==target){
                cout<<"True";
                flag=false;
                break;
            }
            else if(arr[i][mid]<target) lo=mid+1;
            else hi=mid-1;
        }
    }
    if(flag)cout<<"false";
    return 0;
}