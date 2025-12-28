class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        vector<int> x;

        for (int i = 0; i < n; i++) {
            x.push_back(points[i][0]);
        }

        sort(x.begin(), x.end());

        int maxWidth = 0;
        for (int i = 1; i < n; i++) {
            maxWidth = max(maxWidth, x[i] - x[i - 1]);
        }

        return maxWidth;
    }
};