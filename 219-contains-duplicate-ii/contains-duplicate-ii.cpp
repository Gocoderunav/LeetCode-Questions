class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> ump;
        for(int i=0;i<nums.size();i++){
            if(ump.find(nums[i])!=ump.end()){
                if(abs(ump[nums[i]]-i) <=k){
                    return true;
                }else{
                    ump[nums[i]]=i;
                }
            }
            ump[nums[i]]=i;
        }
        return false;
    }
};