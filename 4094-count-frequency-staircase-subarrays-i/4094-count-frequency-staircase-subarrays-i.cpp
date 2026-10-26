class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int i=0;i<n;i++){
          unordered_map<int,pair<int,int>>freq;
          int ct=1;
          int correct =0;
          for(int j=i;j<n;j++){
             if(!freq.count(nums[j])){
              freq[nums[j]].first = ct;
              ct++;
             }
             freq[nums[j]].second++;

             if(freq[nums[j]].second>freq[nums[j]].first) break;
             if(freq[nums[j]].second==freq[nums[j]].first) correct++;

             if(freq.size()==correct) ans++;
          }
        }
        return ans;
    }
};