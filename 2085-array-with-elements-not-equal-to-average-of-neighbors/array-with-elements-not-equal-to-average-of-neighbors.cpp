class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int n = nums.size();
        int l=0, r=n-1;
        while(res.size() != n){
            res.push_back(nums[l]);
            l+=1;
            if (l<=r){
                res.push_back(nums[r]);
                r--;
            }
        }
        return res;
        
    }
};