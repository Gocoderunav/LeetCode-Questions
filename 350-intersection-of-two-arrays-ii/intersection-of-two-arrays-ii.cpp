class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hash1(1001,0);
        vector<int> vec;
        // vector<int> hash1(1000,0);
        for(int i=0;i< nums1.size();i++){
            hash1[nums1[i]]++;
        }

         for(int j=0;j<nums2.size();j++){
            if(hash1[nums2[j]] >0){
                vec.push_back(nums2[j]);
                hash1[nums2[j]]--;
            }
        }
        return vec;
    }
};