class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
         vector<int> pow(n,1);
       int res=0,MOD =1e9+7;
         for(int k=1;k<n;k++){
            pow[k] = (pow[k-1]*2) % MOD;
         }

         int i=0;
         int j = nums.size()-1;
         
         while(i<=j){
           if((nums[i]+nums[j]) <= target){
               res = (res+pow[j-i]) % MOD;
               i++;
           }else{
            j--;
           }
         }
         return res;
    }
};