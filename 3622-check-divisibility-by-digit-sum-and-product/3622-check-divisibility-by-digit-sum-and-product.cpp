class Solution {
public:
    int sum(int n){
      int prod=1;
      int add=0;
      while(n>0){
        prod*=(n%10);
        add+=(n%10);
        n/=10;
      }
      return prod+add;


    }
    bool checkDivisibility(int n) {
        int s=sum(n);
        return n%s==0;
    }
};