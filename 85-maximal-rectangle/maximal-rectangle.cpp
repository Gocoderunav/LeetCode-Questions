class Solution {
private:
    void smallestRight(vector<int>& arr, int n, vector<int>& right) {
        stack<pair<int, int>> st;
        for (int i = n - 1; i >= 0; i--) {
            if (st.empty()) {
                right.push_back(n);
            } else if (!st.empty() && arr[i] > st.top().first) {
                right.push_back(st.top().second);
            } else if (!st.empty() && arr[i] <= st.top().first) {
                while (!st.empty() && arr[i] <= st.top().first) {
                    st.pop();
                }
                if (st.empty()) {
                    right.push_back(n);
                } else {
                    right.push_back(st.top().second);
                }
            }
            st.push({arr[i], i});
        }
        reverse(right.begin(), right.end());
    }

    void smallestLeft(vector<int>& arr, int n, vector<int>& left) {
        stack<pair<int, int>> st;
        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                left.push_back(-1);
            } else if (!st.empty() && arr[i] > st.top().first) {
                left.push_back(st.top().second);
            } else if (!st.empty() && arr[i] <= st.top().first) {
                while (!st.empty() && arr[i] <= st.top().first) {
                    st.pop();
                }
                if (st.empty()) {
                    left.push_back(-1);
                } else {
                    left.push_back(st.top().second);
                }
            }
            st.push({arr[i], i});
        }
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty()) return 0;
        int n = matrix[0].size();
        int res = 0;
        vector<int> vec(n, 0);

        for (int i = 0; i < matrix.size(); i++) {
            vector<int> right, left, width(n);
            int maxi = 0;

            for (int j = 0; j < n; j++) {
                if(matrix[i][j]=='0'){
                    vec[j]=0;
                }else{
                    vec[j]=vec[j]+1;
                }
            }

            smallestRight(vec, n, right);
            smallestLeft(vec, n, left);

            for (int k = 0; k < n; k++) {
                width[k] = right[k] - left[k] - 1;
                maxi = max(maxi, width[k] * vec[k]);
            }

            res = max(res, maxi);
        }

        return res;
    }
};
