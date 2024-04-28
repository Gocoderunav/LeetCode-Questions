class Solution {
public:
    int arraySign(vector<int>& nums) {
        int val =1;
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0) count++;            
            if(nums[i] ==0){
                return 0;
                
            }
            
        }
    return count % 2 ==0 ? 1:-1;
       
    }
};