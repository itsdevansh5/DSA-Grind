class Solution {
public:
    bool canAliceWin(int n) {
      int r = 10;
      bool win = false;
        while(n>=r && r>0){
           win = !win;
           n-=r;
           r--;
        }
        return win;
    }
};