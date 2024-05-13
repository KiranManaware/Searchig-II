// You have a sorted array of infinite numbers, how would you search an element in the array?
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={1,12,14,15,16,28,30,33,45,50};
    int n=v.size();
    int lo=0;
    int hi=1;
    int key=28;
    while(v[hi]<key){
        lo=hi;
        hi*=2;
    }
    bool flag=true;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(v[mid]==key){
            flag=false;
            cout<<key<<" is present at index : "<<mid;
            break;
        }
        else if(v[mid]>key) hi=mid-1;
        else lo=mid+1;//v[mid]<key
        
    }
    if(flag) cout<<key<<" is not present in the array";
    return 0;
}