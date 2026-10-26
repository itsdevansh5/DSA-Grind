class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<int, pair<int, int>> freq;
            int ct = 1;
            int correct = 0;

            for (int j = i; j < n; j++) {
                if (!freq.count(nums[j])) {
                    freq[nums[j]].first = ct++;
                }

                auto& entry = freq[nums[j]];
                entry.second++;

                if (entry.second > entry.first)
                    break;

                if (entry.second == entry.first)
                    correct++;

                int len = j - i + 1;

                if (len == ct * (ct - 1) / 2 &&
                    correct == (int)freq.size()) {
                    ans++;
                }
            }
        }

        return ans;
    }
};