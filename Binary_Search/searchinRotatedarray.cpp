#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&arr,int target){
    int l=0;
    int h=arr.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target) return mid;
        if(arr[mid]<=arr[h]){
            if(arr[mid]<=target && arr[h]>=target) l=mid+1;
            else h=mid-1;
        }
        else{
            if(arr[l]<=target && arr[mid]>=target) h=mid-1;
            else l=mid+1;
        }
    }
    return -1;
}
int main() {
    vector<int>arr={3,4,5,1,2};
    int target=3;
    int idx=search(arr,target);
    cout<<idx;
    return 0;
}