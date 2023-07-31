//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // Create adjacency list
        vector<pair<int, int>> adj[n];
        
        for (auto it : roads) {
            adj[it[0]].push_back({ it[1], it[2] });
            adj[it[1]].push_back({ it[0], it[2] });
        }
        
        vector<long long> dist(n, 1e18); // Use long long to avoid overflow
        vector<int> ways(n, 0);
        
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
        dist[0] = 0;
        ways[0] = 1;
        q.push({ 0, 0 });
        int mod = (int)(1e9 + 7);
        
        while (!q.empty()) {
            auto it = q.top();
            q.pop();
            long long currDist = it.first;
            int node = it.second;
            
            if (currDist > dist[node]) continue;
            
            for (auto its : adj[node]) {
                int adjNode = its.first;
                int edW = its.second;
                
                if (dist[adjNode] > currDist + edW) {
                    dist[adjNode] = currDist + edW;
                    ways[adjNode] = ways[node];
                    q.push({ dist[adjNode], adjNode });
                }
                else if (dist[adjNode] == currDist + edW) {
                    ways[adjNode] = (ways[adjNode] + ways[node]) % mod;
                }
            }
        }
        
        return ways[n - 1] % mod;
    }
};




//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends