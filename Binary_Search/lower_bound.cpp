#include<bits/stdc++.h>
using namespace std;
int lowerb(vector<int> & arr,int target){
    int l=0;
    int h=arr.size();
    while(l<h){
        int mid=l+(h-l)/2;
        if(arr[mid]>=target) h=mid;
        else l=mid+1;
    }
    return l;
}
int main() {
    vector<int>arr={1,2,3,3,3,4,5,6,6,7};
    cout<<lowerb(arr,8);

    return 0;
}