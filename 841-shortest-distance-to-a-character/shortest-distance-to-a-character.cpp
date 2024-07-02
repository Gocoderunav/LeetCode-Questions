class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> res(n, 0);
        vector<int> vec;
        
        // Collect all the positions of character 'c'
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                vec.push_back(i);
            }
        }
        
        // Fill the result vector with shortest distances
        for (int i = 0; i < n; i++) {
            int low = 0, high = vec.size() - 1;
            
            // Handle the case where the character is before the first 'c'
            if (i <= vec[0]) {
                res[i] = vec[0] - i;
            }
            // Handle the case where the character is after the last 'c'
            else if (i >= vec[vec.size() - 1]) {
                res[i] = i - vec[vec.size() - 1];
            }
            // Handle the case where the character is between two 'c's
            else {
                while (low < high - 1) {
                    int mid = (low + high) / 2;
                    if (vec[mid] == i) {
                        low = high = mid;
                        break;
                    } else if (vec[mid] < i) {
                        low = mid;
                    } else {
                        high = mid;
                    }
                }
                res[i] = min(i - vec[low], vec[high] - i);
            }
        }
        
        return res;
    }
};

