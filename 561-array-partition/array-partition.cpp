class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j= nums.size()-2;
        int res=0;
        int mini =INT_MAX;
        while(j >= 0){
           res+=nums[j];
           j-=2;
        }
        return res;
    }
};