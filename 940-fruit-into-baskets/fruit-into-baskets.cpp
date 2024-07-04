class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res = 0;
        int l = 0;
        unordered_map<int,int> mp;
        int n = fruits.size();
        int r = 0;
        
        while (r < n) {
            mp[fruits[r]]++;
            while(mp.size() >2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }
                l++;
              }
              
            res= max(res,(r-l+1));
            r++;
        }
        return res;
    }
};