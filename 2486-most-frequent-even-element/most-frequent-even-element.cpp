#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        priority_queue<pair<int,int>> pq;

        // Count the frequency of each even number
        for (int num : nums) {
            if (num % 2 == 0) {
                mp[num]++;
            }
        }

        // Push the frequency and number pairs into the priority queue
        for (auto& it : mp) {
            pq.push({it.second, it.first});
        }

       int ans =-1;
       while(pq.size()){
        auto it = pq.top();
        ans = it.second;
        pq.pop();
        if(pq.top().first != it.first){
            break;
        }
        
       }
       return ans;
    }
};



