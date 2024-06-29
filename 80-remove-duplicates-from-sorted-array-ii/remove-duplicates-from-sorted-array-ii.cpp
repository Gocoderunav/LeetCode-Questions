class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        int progress =0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]] < 2){
                nums[progress++]=nums[i];
                mp[nums[i]]++;
            }
        }
        return progress;
    }
};