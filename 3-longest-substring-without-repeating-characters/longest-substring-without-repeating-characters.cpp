class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int ans=0;
        int l=0,r=0;
        while(l<=r && r<s.size()){
            if(st.find(s[r])==st.end()){
                ans = max(ans,(r-l+1));
                st.insert(s[r]);
                r++;
            }else{
                st.erase(s[l]);
                l++;
            }
            
        }
        return ans;
    }
};