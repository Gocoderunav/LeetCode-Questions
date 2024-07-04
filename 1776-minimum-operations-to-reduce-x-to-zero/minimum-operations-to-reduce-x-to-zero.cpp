class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int l=0,r=0,sum=0;
        int res = -1;
        int sumArr = accumulate(nums.begin(), nums.end(), 0);
        int target = sumArr-x;
        if (target < 0) return -1;

        while(r<n){
          sum+=nums[r];

           
             while(l<=r && sum >target){
                sum-=nums[l];
                l++;
            }
             if(sum==target){
                res = max(res,(r-l+1));
              }
           r++;
       } 
       return (res==-1)?-1: n-res;
    }
};