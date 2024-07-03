class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len = s1.size();
        int n = s2.size();
        int l=0,r=0;
        vector<int> hashset1(26,0);
        vector<int> hashset2(26,0);
        for(int k=0;k<s1.size();k++){
            hashset1[s1[k]-'a']++;
        }
        while(r < n){
            hashset2[s2[r]-'a']++;
            if((r-l+1) > len){
                hashset2[s2[l]-'a']--;
                l++;
            }
            if(hashset1==hashset2){
                return true;
            }
            r++;
        }
        return false;
    }
};