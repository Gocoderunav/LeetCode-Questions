class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        vector<int> increasing;
        vector<int> decreasing;
        increasing = nums;
        decreasing = nums;

        if(nums[i]<=nums[j]){
          sort(nums.begin(),nums.end());
        }
        if(nums[i]>nums[j]){
          sort(nums.rbegin(),nums.rend());
        }
        if(increasing == nums || decreasing == nums){
            return true;
        }
        return false;
        
    }
};