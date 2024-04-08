class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string,vector<string>>mp;
        for(auto it: strs){
            string temp =it;
            sort(it.begin() ,it.end());
            mp[it].push_back(temp);    
        }
        for(auto it :mp){
                vec.push_back(it.second);
    }
    return vec;
    }
};