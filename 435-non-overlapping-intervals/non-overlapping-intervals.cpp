class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int, int>> activities;
        for (int i = 0; i < n; i++) {
            activities.push_back({intervals[i][1], intervals[i][0]});
        }
        sort(activities.begin(), activities.end());

        int count = 1;
        int i = 0;

        for (int j = 1; j < n; j++) {
            if (activities[j].second >= activities[i].first) {
                count++;
                i = j;
            }
        }

        return n - count;
    }
};
