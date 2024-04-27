

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }

        
        auto comp = [](const pair<int, char>& a, const pair<int, char>& b) {
            return a.first < b.first; 
        };

        
        priority_queue<pair<int, char>, vector<pair<int, char>>, decltype(comp)> pq(comp);

        
        for (auto& it : mp) {
            pq.push({it.second, it.first});
        }

        
        string ans = "";
        while (!pq.empty()) {
            auto it = pq.top();
            int val = it.first;
            char str = it.second; 
            cout<<val;
            cout<<str;
            while (val--) {
                ans += str;
            }
            pq.pop();
        }
        return ans;
    }
};
