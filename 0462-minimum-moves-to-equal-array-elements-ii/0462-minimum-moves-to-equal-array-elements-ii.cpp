class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        std::sort(nums.begin(),nums.end());
        int res = 0;
        if(n%2){
          int m = nums[(n-1)/2];
          for(int i:nums){
            res+=abs(i-m);
          }
        }
        else{
          int res2 = 0;
          int m = nums[n/2];
          int p = nums[(n+1)/2];
          for(int i:nums){
            res+=abs(m-i);
            res2+=abs(p-i);
          }
          res = min(res,res2);
        }
        return res;

    }
};