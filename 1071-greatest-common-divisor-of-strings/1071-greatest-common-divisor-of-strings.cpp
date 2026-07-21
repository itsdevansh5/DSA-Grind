class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int m=str1.size();
        int n=str2.size();
        if(m<n) return gcdOfStrings(str2,str1);
        string res;
        for(int i=n;i>=1;i--){
          if(n%i!=0 || m%i!=0) continue;
          int a1=n/i;
          int a2=m/i;
          string part=str2.substr(0,i);
          string check;
          for(int j=1;j<=a1;j++) check+=part;
          if(check!=str2) continue;
          for(int k=1;k<=a2-a1;k++) check+=part;
          if(check==str1) return part;
        }
        return "";
    }
};