class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        int i=0,j=s.size()-1;
        unordered_map<char,vector<int>> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
        }
        int count=-1;
        for(auto it:mp){
            if(it.second.size()>1){
            int val = it.second.back()-it.second.front() -1;
            count = max(count,val);
        }
        }
        return count;
    }
};