class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int  maxVal = arr[n-1];
        arr[n-1]= -1;
        for(int i=n-2;i>=0;i--){
            int prevmax = maxVal;
            if(maxVal<arr[i]){
                maxVal = arr[i];
            }
            arr[i]=prevmax;
        }
        return arr;
    }
};