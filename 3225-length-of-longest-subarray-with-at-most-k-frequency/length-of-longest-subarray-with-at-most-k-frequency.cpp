class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,r=0,res=0;
        unordered_map<int,int> hashmap;
        
        while(r<n){
            hashmap[nums[r]]++;
            while(hashmap[nums[r]]>k && l<=r){
                hashmap[nums[l]]--;
                l++;
            }
            res = max(res,r-l+1);
            r++;
        }
        return res;
    }
};