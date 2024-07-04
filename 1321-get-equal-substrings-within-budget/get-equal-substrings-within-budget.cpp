class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        
         int l=0,r=0,currSum=0,res=0;
         while(r<n){
            currSum +=abs(t[r]-s[r]);

            while(currSum > maxCost){
                currSum-=abs(t[l]-s[l]);
                l++;
            }
            res = max(res,(r-l+1));
            r++;
         }
         return res;
    }
};