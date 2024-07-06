class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>vec1;
        vector<int>vec2;

        int maxLeft=height[0];
        for(int i=0;i<n;i++){
            if( height[i]>maxLeft){
                 maxLeft =height[i];
            }
                vec1.push_back(maxLeft);
        }
        
        int maxRight =height[n-1];
         for(int j=n-1;j>=0;j--){
            if( height[j] > maxRight){
                maxRight =height[j];
            }
                vec2.push_back(maxRight);
            
        }
        reverse(vec2.begin(), vec2.end());
        int sum=0;
        for(int k=0;k<n;k++){
            int mini = min(vec1[k],vec2[k]);
            sum+= mini-height[k];
        }
        return sum;
    }
};