class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>val;
        for(vector<string>&arr : knowledge){
          val[arr[0]]=arr[1];
        }
        int i=0;
        string res;
        int n=s.size();
        while(i<n){
          if(s[i]=='('){
            string key;
            int j=i+1;
            while(j<n && s[j]!=')'){
                 key+=s[j];
                 j++;
            }
            if(val.count(key)) res+=val[key];
            else res+='?';
            i=j;
          }
          else res+=s[i];
          i++;
        }
        return res;
    }
};