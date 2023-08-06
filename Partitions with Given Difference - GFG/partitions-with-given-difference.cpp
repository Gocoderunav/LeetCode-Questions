//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


const int MOD = 1000000007;

class Solution {
public:
    int countWays(vector<int>& arr, int n, int sum1, int diff, vector<vector<int>>& memo) {
        if (n == 0) {
            if (sum1 == diff)
                return 1;
            else
                return 0;
        }

        if (memo[n][sum1] != -1) return memo[n][sum1];

        int include = countWays(arr, n - 1, sum1 + arr[n - 1], diff, memo);
        int exclude = countWays(arr, n - 1, sum1, diff, memo);

        memo[n][sum1] = (include + exclude) % MOD;
        return memo[n][sum1];
    }

    int countPartitions(int n, int d, vector<int>& arr) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        // Check if the difference 'd' is possible
        if ((sum + d) % 2 != 0) {
            return 0;
        }

        int sum1 = (sum + d) / 2;
        vector<vector<int>> memo(n + 1, vector<int>(sum + 1, -1));
        return countWays(arr, n, 0, sum1, memo);
    }
};







//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends