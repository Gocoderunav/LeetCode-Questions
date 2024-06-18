class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec;
        for(auto num : nums){
            int index = abs(num)-1;
            nums[index] = -1*abs(nums[index]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                vec.push_back(i+1);
            }
        }
        return vec;
    }
};