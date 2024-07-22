class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0;
        int count =0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
            if(sum >= threshold*k){
                count++;
            }
        
        for(int j = k; j<arr.size();j++){
            sum-=arr[j-k];
            sum+=arr[j];
            if(sum >= threshold*k){
                count++;
               }
             }
        return count;
    }
};