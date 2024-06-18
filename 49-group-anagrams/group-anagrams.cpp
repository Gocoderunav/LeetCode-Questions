class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ump;
        
        for(auto it: strs){
         string temp =it;
          sort(it.begin(),it.end());
          ump[it].push_back(temp);
        }
        vector<vector<string>> vec;
        for(auto itt:ump){
            vec.push_back(itt.second);
        }
        return vec;
    }
};