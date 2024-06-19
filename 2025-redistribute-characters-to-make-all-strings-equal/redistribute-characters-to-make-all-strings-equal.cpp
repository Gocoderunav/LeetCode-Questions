class Solution {
public:
    bool makeEqual(vector<string>& words) {
         vector<int>hashset(26,0);
         int n= words.size();
        for(auto it: words){
            for(int i=0;i<it.size();i++){
                hashset[it[i]-'a']++;
            }
        }
        for(int j=0;j<hashset.size();j++){
            if(hashset[j]>0 && (hashset[j] % n !=0)){
                return false;
            }
        }
        return true;
    }
};