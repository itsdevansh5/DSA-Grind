class Solution {
public:
    int firstGreater(vector<vector<int>>&intervals,int i){
      int end = intervals[i][1];
      int l=i+1;
      int h=intervals.size();
      while(l<h){
        int mid = l+(h-l)/2;
        int v =intervals[mid][0];
        if(v<=end) l=mid+1;
        else h=mid;
      }
      return l;
    }
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(),intervals.end(),[](
          vector<int>&a,vector<int>&b){return a[0]<b[0];}
        );

        int n = intervals.size();

        long long ans = 0;
        for(int i=0;i<n;i++){
          int idx = firstGreater(intervals,i);
          ans+=(idx-i-1);
        }
        return ans;
    }
};