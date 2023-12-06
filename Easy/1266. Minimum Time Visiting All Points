class Solution {
public:
    int cordonateDiff(vector<int>& from, vector<int>& to) {
        int xDiff = abs(from[0] - to[0]);
        int yDiff = abs(from[1] - to[1]);
        
        return max(xDiff, yDiff);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for (int i = 1; i < points.size(); i++) {
            time += cordonateDiff(points[i - 1], points[i]);
        }
        return time;
    }
};
