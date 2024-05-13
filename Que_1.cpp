// Write a program to apply binary search in array sorted in decreasing order.
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={100,89,66,44,32,21};
    int n=v.size();
    int lo=0;
    int hi=n-1;
    int key=77;
    bool flag=true;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(v[mid]==key){
            flag=false;
            cout<<key<<" is present at index : "<<mid;
            break;
        }
        else if(v[mid]<key) hi=mid-1;
        else lo=mid+1;//v[mid]>key
        
    }
    if(flag) cout<<key<<" is not present in the array";
    return 0;
}