class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0,j = i+(k-1);
        int mini = INT_MAX;
        while(j<nums.size()){
            int val = abs(nums[j]-nums[i]);
            mini = min(mini,val);
            i++;
            j++;
        }
        return mini;
    }
};