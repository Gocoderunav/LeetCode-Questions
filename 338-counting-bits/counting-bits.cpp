class Solution {
private:
 int countOne(int num){
    int res =0;
        while(num){
            num =num &(num-1);
            res+=1;
            
        }
        return res;
 }
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i=0;i<=n;i++){
            ans.push_back(countOne(i));
        }
        return ans;
    }
};