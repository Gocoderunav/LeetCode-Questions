class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = 1e5+1;
        int res =-1;
        for(int i=0;i<prices.size();i++){
           if(prices[i] < mini){
             mini = prices[i];
           }
           int profit = prices[i]-mini;
           res = max(res,profit);
        }
      return res;
    }
};