class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
         vector<int> vec(n,-1);

       
        int maxi = arr[n-1];
       

         for(int i = n-2; i>=0 ;i--){
            vec[i]=maxi;
            maxi = max(maxi,arr[i]);
         }
         return vec;
    }
};