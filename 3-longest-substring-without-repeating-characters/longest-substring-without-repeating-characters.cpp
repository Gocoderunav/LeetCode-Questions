class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,n=s.size(),maxi=0;
         unordered_set<char>st;
        while(r<n){
            if(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }else{
                maxi = max(maxi,r-l+1);
                st.insert(s[r]);
                r++;
                
            }
        }
        return maxi;
    }
};