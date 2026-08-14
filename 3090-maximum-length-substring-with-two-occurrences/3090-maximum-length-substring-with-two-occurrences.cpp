class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>freq(26,0);
        int moreThan3=0;
        int i=0;
        int maxl=0;
        int n=s.size();
        for(int j=0;j<n;j++){
            char a=s[j];
            freq[a-'a']++;
            if(freq[a-'a']>2) moreThan3++;

            while(moreThan3>0){
              char r=s[i];
              i++;
              freq[r-'a']--;
              if(freq[r-'a']==2) moreThan3--;
            }
          maxl=max(maxl,j-i+1);
        }
        return maxl;
    }
};