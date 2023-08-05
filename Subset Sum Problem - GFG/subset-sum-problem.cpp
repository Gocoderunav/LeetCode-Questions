//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++class Solution {
class Solution{
public:
    int isPossible(vector<int>& arr, int n, int sum, vector<vector<int>>& memo) {
        // Base cases
        if (sum == 0) {
            return 1; // Subset with the given sum is found
        }
        if (n == 0) {
            return 0; // Reached the end of the array, and the sum is not possible
        }

        // Check if the result for this subproblem is already calculated
        if (memo[n][sum] != -1) {
            return memo[n][sum];
        }

        // Recursive cases
        if (arr[n - 1] <= sum) {
            // Two possibilities:
            // 1. Include the last element in the sum and check if the remaining sum is achievable.
            // 2. Exclude the last element and check if the current sum is achievable.
            memo[n][sum] = isPossible(arr, n - 1, sum - arr[n - 1], memo) || isPossible(arr, n - 1, sum, memo);
        } else {
            // The last element is greater than the required sum, so exclude it and check the remaining elements.
            memo[n][sum] = isPossible(arr, n - 1, sum, memo);
        }

        return memo[n][sum];
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<vector<int>> memo(n + 1, vector<int>(sum + 1, -1));
        return isPossible(arr, n, sum, memo);
    }
};





//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends