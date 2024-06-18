class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res;
        if (rowIndex == 0) {
            return {1};
        }
        if (rowIndex == 1) {
            return {1, 1};
        }
        res.push_back({1});
        res.push_back({1, 1});
        for (int i = 2; i <= rowIndex; i++) {
            vector<int> vec(i + 1, 1);
            for (int j = 1; j < i; j++) {
                vec[j] = res[i - 1][j - 1] + res[i - 1][j];
            }
            res.push_back(vec);
        }
        return res[rowIndex];
    }
};
