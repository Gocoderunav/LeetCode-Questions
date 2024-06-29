class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j = height.size()-1;
        int waterVal =0;
        while(i<j){
            int minHeight = min(height[i],height[j]);
                waterVal = max(waterVal,minHeight*(j-i));
                if(height[j]==height[i]){
                    i++;
                    j--;
                }
                else if(height[j]>height[i]){
                    i++;
                }else if(height[j] <height[i]){
                    j--;
                }
        }
        return waterVal;
    }
};