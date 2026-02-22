#include<bits/stdc++.h>
using namespace std;
void BinarySearch(vector<int> & arr,int target){
 int l=0;
    int h=arr.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(arr[mid]==target){ cout<< mid;
            break;
        }
        else if(arr[mid]>target) h=mid-1;
        else l=mid+1;
    }
    cout<<"first element in array greater than target"<<arr[l]<<endl;
    cout<<"last element in array smaller than target"<<arr[h]<<endl;
    return;
    
}
int main() {
    vector<int>arr={1,3,6,8,9};
    int target=8;
    BinarySearch(arr,target);

   

    


    return 0;
}