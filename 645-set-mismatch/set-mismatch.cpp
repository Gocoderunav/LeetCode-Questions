class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> hashset(n + 1, 0);
        
      
        for(int i = 0; i < n; i++) {
            hashset[nums[i]]++;
        }
        
        vector<int> result(2, 0);
        
        
        for(int i = 1; i <= n; i++) {
            if(hashset[i] == 2) {
                result[0] = i;  
            } else if(hashset[i] == 0) {
                result[1] = i; 
            }
        }
        
        return result;
    }
};
