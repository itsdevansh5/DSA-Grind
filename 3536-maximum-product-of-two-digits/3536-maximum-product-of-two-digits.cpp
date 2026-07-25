class Solution {
public:
    int maxProduct(int n) {
        int maxd=0;
        int secmaxd=0;
        while(n>0){
          int d=n%10;
          if(maxd<d){
            secmaxd=maxd;
            maxd=d;
          }
          else if(secmaxd<d) secmaxd=d;
          n/=10;
        }
        return maxd*secmaxd;
    }
};