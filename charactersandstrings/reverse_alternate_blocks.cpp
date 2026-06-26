#include<bits/stdc++.h>
using namespace std;

string rev(string s,int k){
    int p=1;
    int n=s.size();
    for(int i=0;i<n;i+=k){
        int start=i;
        int end=min(i+k-1,n-1);
        if(p%2==0) std::reverse(s.begin()+i,s.begin()+end+1);
        p++;
    }
    return s;
       
}
int main() {
    string input;
    getline(cin,input);
    int k;
    cin>>k;
    string res=rev(input,k);
    cout<<res;
    return 0;
}