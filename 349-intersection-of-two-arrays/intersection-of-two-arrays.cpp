class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<bool> hashset1(1000,false);
        vector<bool> hashset2(1000,false);
        for(int i=0;i<nums1.size();i++){
            hashset1[nums1[i]]=true;
        }
        vector<int>vec;
        for(int j=0;j<nums2.size();j++){
            
            if(hashset1[nums2[j]]==true){
                    vec.push_back(nums2[j]);
                    
            }
            hashset1[nums2[j]]=false;
          
        }
       return vec;

    }
};