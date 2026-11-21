class Solution {
public:
    long long mergeSort(vector<long long>& prefix, vector<long long>& temp, int left, int right,  long long lower, long long upper) {

        // Base case
        if (right - left <= 1) {
            return 0;
        }

        int mid = left + (right - left) / 2;

        // Count valid pairs in left and right halves
        long long count = 0;

        count += mergeSort(prefix, temp, left, mid, lower, upper);

        count += mergeSort(prefix, temp, mid, right, lower, upper);

        // Count valid cross-half pairs
        int low = mid;
        int high = mid;

        for (int i = left; i < mid; i++) {

            // Find first element >= prefix[i] + lower
            while (low < right && prefix[low] - prefix[i] < lower) {
                low++;
            }

            // Find first element > prefix[i] + upper
            while (high < right && prefix[high] - prefix[i] <= upper) {
                high++;
            }

            count += high - low;
        }

        // Merge two sorted halves
        int i = left;
        int j = mid;
        int k = left;

        while (i < mid && j < right) {

            if (prefix[i] <= prefix[j]) {
                temp[k++] = prefix[i++];
            }
            else {
                temp[k++] = prefix[j++];
            }
        }

        while (i < mid) {
            temp[k++] = prefix[i++];
        }

        while (j < right) {
            temp[k++] = prefix[j++];
        }

        // Copy merged elements back
        for (int p = left; p < right; p++) {
            prefix[p] = temp[p];
        }

        return count;
    }

    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int n = nums.size();

        // Build prefix sum array
        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        // Temporary array for merging
        vector<long long> temp(n + 1);

        return (int)mergeSort(prefix, temp, 0, n + 1, lower, upper);
    }
};