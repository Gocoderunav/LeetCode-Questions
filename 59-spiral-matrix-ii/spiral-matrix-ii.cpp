class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        int left = 0;
        int right = n - 1;
        int top = 0;
        int bottom = n - 1;

        int valToAdd = 1;

        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++) {
                matrix[top][j] = valToAdd++;
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = valToAdd++;
            }
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    matrix[bottom][j] = valToAdd++;
                }
            }
            bottom--;

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    matrix[i][left] = valToAdd++;
                }
            }
            left++;
        }

        return matrix;
    }
};
