class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        
        if(n1 !=n2) return false;
        int n =n1;
        for(int i=0;i<n1;i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(int i=0;i<n;i++){
           if(mp1[s[i]]!=mp2[s[i]]){
              return false;
           }
        }
        return true;
    }
};