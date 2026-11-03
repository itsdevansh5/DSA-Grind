class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int m = nums[n / 2];

        int res = 0;

        for (int x : nums) {
            res += abs(x - m);
        }

        return res;
    }
};