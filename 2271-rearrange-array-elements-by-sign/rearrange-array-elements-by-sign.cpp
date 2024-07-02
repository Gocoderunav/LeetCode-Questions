class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>vec(n,0);
        int posIndex =0;
        int negIndex =1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                vec[posIndex]=nums[i];
                posIndex+=2;
            }else{
                vec[negIndex]=nums[i]++;
                negIndex+=2;
            }
        }
        return vec;
    }
};