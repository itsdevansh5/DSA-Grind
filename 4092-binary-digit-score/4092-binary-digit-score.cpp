class Solution {
public:
    int setbits(int n){
      int res=0;
      while(n>0){
        int r = n%2;
        if(r==1) res++;
        n/=2;
      }
      return res;
    }
    int calculateScore(int a, int b) {
        int s1 = setbits(a);
        int s2 = setbits(b);
        int ans;
        if(s1>=s2) ans = s1*s2;
        else ans = s2/s1;
        return ans;
    }
};