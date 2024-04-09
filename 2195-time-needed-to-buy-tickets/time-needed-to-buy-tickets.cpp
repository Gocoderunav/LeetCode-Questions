class Solution {
public:

    int timeRequiredToBuy(vector<int>& tickets, int k) {
         using paired = pair<int, int>; 
        queue<paired> q;
        for(int i=0;i< tickets.size();i++){
            q.push({i,tickets[i]});
        }
        int time =0;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int a = it.first;
            int b = it.second;
             b =b-1;
             time++;
             if(b>0){
                q.push({a,b});
             }
             if(a ==k && b==0){
                break;
             }
           
        }
        return time;
    }
};