
class Solution {
private:
    int distanceSquared(vector<int>& point) {
        return point[0] * point[0] +
               point[1] * point[1];
    }

    int partition(vector<vector<int>>& points,
                  int left, int right) {
        int pivotDist = distanceSquared(points[right]);

        int i = left;

        for (int j = left; j < right; j++) {
            if (distanceSquared(points[j]) <= pivotDist) {
                swap(points[i], points[j]);
                i++;
            }
        }

        swap(points[i], points[right]);

        return i;
    }

public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int left = 0;
        int right = points.size() - 1;

        while (left <= right) {
            int pivotIndex = partition(points, left, right);

            if (pivotIndex == k - 1) {
                break;
            }
            else if (pivotIndex < k - 1) {
                left = pivotIndex + 1;
            }
            else {
                right = pivotIndex - 1;
            }
        }

        vector<vector<int>> result(
            points.begin(),
            points.begin() + k
        );

        return result;
    }
};
