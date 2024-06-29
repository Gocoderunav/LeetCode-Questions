class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        for(int i=0;i<n-2;i++){
            if (nums[i] > 0) break; 
             if(i>0 && nums[i]==nums[i-1]){
                continue;
             }
            int val = nums[i];

            int low = i+1;
            int high = n-1;
           
            while(low < high){
                int sum = nums[low]+nums[high]+val;
                if((sum)==0){
                 res.push_back({val, nums[low], nums[high]});

                 while(low < high &&  nums[high] ==nums[high-1]) high--;
                 while(low < high &&  nums[low] ==nums[low+1]) low++;
                 low++;
                 high--;
                }else if((sum) > 0){
                    high--;
                }else {
                    low++;
                }
            }
           
        }
        return res;
    }
};