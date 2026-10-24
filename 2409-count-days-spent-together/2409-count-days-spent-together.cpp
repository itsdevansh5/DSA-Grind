class Solution {
public:
    pair<int,int>parse(string time){
      pair<int,int>ans;
      stringstream ss(time);
      string first,second;
      getline(ss,first,'-');
      getline(ss,second);
      ans.first=stoi(first);
      ans.second=stoi(second);
      return ans;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        std::pair<int,int>arrAlice;
        std::pair<int,int>leaAlice;
        arrAlice = parse(arriveAlice);
        leaAlice = parse(leaveAlice);

        std::pair<int,int>arrBob;
        std::pair<int,int>leaBob;
        arrBob = parse(arriveBob);
        leaBob = parse(leaveBob);

        vector<int>month={31,28,31,30,31,30,31,31,30,31,30,31};
        vector<int>days(12);
        int sum =0;
        for(int i=0;i<12;i++){
          sum+=month[i];
          days[i]=sum;
        }

        int aAlice =(arrAlice.first>1)? days[arrAlice.first-2]+arrAlice.second : arrAlice.second;
        int bAlice =(leaAlice.first>1)? days[leaAlice.first-2]+leaAlice.second : leaAlice.second;
        int aBob =(arrBob.first>1)? days[arrBob.first-2]+arrBob.second : arrBob.second;
        int bBob = (leaBob.first>1)?days[leaBob.first-2]+leaBob.second : leaBob.second;

        int p =max(aAlice,aBob);
        int q = min(bBob,bAlice);
        
        if(p<=q) return q-p+1;
        else return 0;





        

    }
};