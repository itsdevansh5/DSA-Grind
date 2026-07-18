class Solution {
public:
   int gcd(int a,int b){
    while(b>0){
      int t=a;
      a=b;
      b=t%b;
    }
    return a;
   }
    int findGCD(vector<int>& nums) {
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        return gcd(a,b);
    }
};