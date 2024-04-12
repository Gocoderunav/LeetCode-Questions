class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        
        int start = newInterval[0];
        int end = newInterval[1];
        bool intervalInserted = false;

        for (int i = 0; i < intervals.size(); i++) {
            if (end < intervals[i][0]) {
                if (!intervalInserted) {
                    res.push_back({start, end});
                    intervalInserted = true;
                }
                res.push_back(intervals[i]);
            } else if (start > intervals[i][1]) {
                res.push_back(intervals[i]);
            } else {
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
            }
        }
        
        if (!intervalInserted) {
            res.push_back({start, end});
        }

        return res;
    }
};
