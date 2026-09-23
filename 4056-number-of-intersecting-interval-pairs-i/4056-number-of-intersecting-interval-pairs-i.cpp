class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(),intervals.end(),[](
                  vector<int>&a,vector<int>&b){return a[0]<b[0];}
        );
        int n=intervals.size();
        int ct=0;
        for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++){
            if(intervals[i][1]>=intervals[j][0]) ct++;



          }
        }
        return ct;
    }
};