
class Solution {
private:
    int cross(vector<int>& A, vector<int>& B, vector<int>& C) {
        return (B[0] - A[0]) * (C[1] - A[1]) -
               (B[1] - A[1]) * (C[0] - A[0]);
    }

public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        int n = trees.size();

        if (n <= 1) return trees;

        // Sort points lexicographically
        sort(trees.begin(), trees.end());

        vector<vector<int>> lower, upper;

        // Build lower hull
        for (auto& point : trees) {
            while (lower.size() >= 2 &&
                   cross(lower[lower.size() - 2],
                         lower.back(), point) < 0) {
                lower.pop_back();
            }

            lower.push_back(point);
        }

        // Build upper hull
        for (int i = n - 1; i >= 0; i--) {
            auto& point = trees[i];

            while (upper.size() >= 2 &&
                   cross(upper[upper.size() - 2],
                         upper.back(), point) < 0) {
                upper.pop_back();
            }

            upper.push_back(point);
        }

        // Remove duplicates
        set<pair<int, int>> uniquePoints;

        for (auto& point : lower) {
            uniquePoints.insert({point[0], point[1]});
        }

        for (auto& point : upper) {
            uniquePoints.insert({point[0], point[1]});
        }

        vector<vector<int>> result;

        for (auto& point : uniquePoints) {
            result.push_back({point.first, point.second});
        }

        return result;
    }
};
