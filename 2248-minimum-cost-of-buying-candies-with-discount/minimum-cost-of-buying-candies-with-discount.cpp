class Solution {
public:
    int minimumCost(vector<int>& cost) {
       sort(cost.begin(),cost.end());
      int res = 0;
       int count =0;
       int i = cost.size()-1;
       while(i>=0){
            count++;
            if(count % 3 != 0){
            res += cost[i];
            }
            i--;

       } 
       return res;
    }
};