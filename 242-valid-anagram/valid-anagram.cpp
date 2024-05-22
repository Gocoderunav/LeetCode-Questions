class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int> hashmap1 (26,0);
       vector<int> hashmap2 (26,0);
       if( s.size()!= t.size()) return false;
       for(int i = 0 ; i < s.size();i++){
         hashmap1[s[i]-'a']++;
         hashmap2[t[i]-'a']++;
       }
        return (hashmap1 == hashmap2);
    }
};