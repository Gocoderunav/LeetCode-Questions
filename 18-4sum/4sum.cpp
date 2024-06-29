// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         vector<vector<int>> res;
//         sort(nums.begin(),nums.end());
        
//         int n = nums.size();
//         if (n < 4) return res;
//         for(int k =0;k<n-3;k++){
//             if(k>0 && nums[k]==nums[k-1]){
//                 continue;
//              }
//         int val = nums[k];

//            for(int i=k+1;i<n-2;i++){
            
//                 if(i>k+1 && nums[i]==nums[i-1]){
//                 continue;
//                }
//               int val1 = nums[i];

//               int low = i+1;
//               int high = n-1;
           
//               while(low < high){
//                 long long sum = nums[low]+nums[high]+val1+val;
//                 if((sum)==target){
//                  res.push_back({val, nums[low], nums[high],val1});

//                  while(low < high &&  nums[high] ==nums[high-1]) high--;
//                  while(low < high &&  nums[low] ==nums[low+1]) low++;
//                  low++;
//                  high--;
//                 }else if((sum) > target){
//                     high--;
//                 }else {
//                     low++;
//                 }
//             }
           
//         }
//         }
//         return res;
//     }
// };


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        if (n < 4) return res;
        
        for (int k = 0; k < n - 3; k++) {
            if (k > 0 && nums[k] == nums[k - 1]) {
                continue;
            }
            int val = nums[k];
            
            for (int i = k + 1; i < n - 2; i++) {
                if (i > k + 1 && nums[i] == nums[i - 1]) {
                    continue;
                }
                int val1 = nums[i];

                int low = i + 1;
                int high = n - 1;

                while (low < high) {
                    long long sum = static_cast<long long>(nums[low]) + nums[high] + val1 + val;
                    if (sum == target) {
                        res.push_back({val, val1, nums[low], nums[high]});
                        
                        while (low < high && nums[low] == nums[low + 1]) low++;
                        while (low < high && nums[high] == nums[high - 1]) high--;
                        
                        low++;
                        high--;
                    } else if (sum > target) {
                        high--;
                    } else {
                        low++;
                    }
                }
            }
        }
        return res;
    }
};
