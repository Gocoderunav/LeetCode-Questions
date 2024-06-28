class Solution {
public:
 int removeDuplicates(vector<int>& nums) {
        int sum =0;
        unordered_set<int> st;
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i])==st.end()){
                nums[sum++]=nums[i];
            }
            st.insert(nums[i]);
        }
    return st.size();
 }
};