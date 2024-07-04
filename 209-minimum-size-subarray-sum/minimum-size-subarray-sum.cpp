class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int n = nums.size();
       int l=0,r=0,sum=0;
       int res =INT_MAX;
       int sumArr = accumulate(nums.begin(), nums.end(), 0);
       if(sumArr < target){
         return 0;
       }
       while(r<n){
        sum+=nums[r];

           while(sum >= target){
            res = min(res,(r-l+1));
            sum-=nums[l];
            l++;
            }
         
         r++;
       } 
       return res;
    }
};