class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int l=0,r=0,maxCount=0;
        long long res=0;
        int maxi = *max_element(nums.begin(), nums.end());
        while(r<n){
           if(nums[r]==maxi){
              maxCount+=1;
           }
           while(maxCount >k  || (l<=r && maxCount==k && nums[l]!=maxi)){
             if(nums[l]==maxi){
                maxCount-=1;
             }
                l++;
             
           }
           if(maxCount==k){
             res +=l+1;
           }
           r++;
        }
        return res; 
    }
};