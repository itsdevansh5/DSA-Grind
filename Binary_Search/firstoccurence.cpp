#include<bits/stdc++.h>
using namespace std;
int BSfirst(vector<int> & arr,int target){
    int l=0;
    int h=arr.size()-1;
    int ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){
           ans=mid;
           h=mid-1;
        }
        else if(arr[mid]>target) h=mid-1;
        else l=mid+1;
    }
    return ans;
}
int main() {
    vector<int>arr={3,5,5,5,6,6,8,9};
    cout<<BSfirst(arr,5);
    return 0;
}