class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sum =0;
        int countzero = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[sum++]= nums[i];
            }
            else if(nums[i]==0){
                countzero++;
            }
          
        }
        for(int i = sum ;i<nums.size();i++){
            nums[i]=0;
        }
    }
};