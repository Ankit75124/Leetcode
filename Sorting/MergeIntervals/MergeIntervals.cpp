class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [&](const vector<int>& v1, const vector<int>& v2) {
            if (v1[0] < v2[0]) return true;
            if (v1[0] == v2[0] && v1[1] < v2[1]) return true;
            return false;
        });
        int n = intervals.size();
        vector<vector<int>> res;
        for (int i = 0; i < n; i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];
            int j;
            for (j = i+1; j < n; j++) {
                if (intervals[j][0] <= end) end = max(end, intervals[j][1]);
                else break;
            }
            res.push_back({start, end});
            i += j - i - 1;
        }
        return res;
    }
};
