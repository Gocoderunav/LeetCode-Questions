class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maxLeft = 0;  // Initialize maxLeft to 0
        int maxRight = 0; // Initialize maxRight to 0
        int result = 0;

        while (i < j) {
            if (height[i] <= height[j]) {
                // Update maxLeft and calculate trapped water on the left side
                maxLeft = max(maxLeft, height[i]);
                result += maxLeft - height[i];
                i++;
            } else {
                // Update maxRight and calculate trapped water on the right side
                maxRight = max(maxRight, height[j]);
                result += maxRight - height[j];
                j--;
            }
        }

        return result;
    }
};