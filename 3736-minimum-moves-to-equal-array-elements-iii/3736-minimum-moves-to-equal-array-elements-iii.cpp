class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxe = *max_element(nums.begin(),nums.end());
        int res = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
          res+=(maxe-nums[i]);
        }
        return res;
    }
};