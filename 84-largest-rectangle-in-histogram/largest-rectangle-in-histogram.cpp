class Solution {
     private:
     
     void smallestRight(vector<int>& arr, int n,vector<int>& right){
         
         stack<pair<int,int>> st;
         for(int i=n-1;i>=0;i--){
             
             if(st.empty()){
                 right.push_back(n);
             }
             else if (!st.empty() && arr[i] > st.top().first){
                right.push_back(st.top().second);
             }else if(!st.empty() && arr[i] <=st.top().first){
                 while(!st.empty() && arr[i] <= st.top().first){
                     st.pop();
                 }
                 if(st.empty()){
                     right.push_back(n);
                 }else{
                     right.push_back(st.top().second);
                 }
             }
            st.push({arr[i],i}); 
         }
         reverse(right.begin(),right.end());
         
     }
     
     void smallestLeft(vector<int>& arr, int n,vector<int>& left){
         
         stack<pair<int,int>> st;
         for(int i=0;i<n;i++){
             
             if(st.empty()){
                 left.push_back(-1);
             }
             else if (!st.empty() && arr[i] > st.top().first){
                left.push_back(st.top().second);
             }else if(!st.empty() && arr[i] <=st.top().first){
                 while(!st.empty() && arr[i] <= st.top().first){
                     st.pop();
                 }
                 if(st.empty()){
                     left.push_back(-1);
                 }else{
                     left.push_back(st.top().second);
                 }
             }
            st.push({arr[i],i}); 
         }
     }
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        vector <int> right;
        vector <int> left;
        smallestRight(arr,n,right);
        smallestLeft(arr,n,left);
        
        vector<int> width(n);
        int maxi = 0;
        for(int i=0;i<n;i++){
            width[i] = right[i]-left[i]-1;
            maxi = max(maxi, width[i]* arr[i]);
        }
        return maxi; 
    }
};