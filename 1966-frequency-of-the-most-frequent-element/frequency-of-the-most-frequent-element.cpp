class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int res = 0;
        int l = 0;
        long long sum = 0; 
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int r = 0;
        while (r < n) {
            sum += nums[r];
            
            
            while ((long long)nums[r] * (r - l + 1) - sum > k) {
                sum -= nums[l];
                l++;
            }
            
            res = max(res, r - l + 1);
            r++;
        }
        
        return res;
    }
};