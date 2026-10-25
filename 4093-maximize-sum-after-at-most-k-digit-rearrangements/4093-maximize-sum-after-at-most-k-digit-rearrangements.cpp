class Solution {
public:
    long long newint(int n){
      vector<int>digits;
      while(n>0){
        digits.push_back(n%10);
        n/=10;
      }
      std::sort(digits.begin(),digits.end(),[](int a,int b){return a>b;});
      long long ans =0;
      for(int i:digits){
        ans = ans*10 +i;
      }
      return ans;
    }
    long long maximizeSum(vector<int>& nums, int k) {
      int n=nums.size();
      long long sum = accumulate(nums.begin(),nums.end(),0*1LL);
      vector<long long>diff(n);

      for(int i=0;i<n;i++){
        long long r =newint(nums[i]);
        long long d = r-nums[i];
        diff[i]=d;
      }

      std::sort(diff.begin(),diff.end(),[](
        long long a,long long b
      ){
        return a>b;
      });

      for(int i=0;i<k;i++){
        sum+=diff[i];
      }
      return sum;




    }
};