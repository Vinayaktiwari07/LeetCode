class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int i = 0;

        while (i < n && k > 0 && nums[i] < 0) {
            nums[i] = -nums[i];
            i++;
            k--;
        }

        if (k % 2 == 1) {
            int idx = min_element(nums.begin(), nums.end()) - nums.begin();
            nums[idx] = -nums[idx];
        }

        return accumulate(nums.begin(), nums.end(), 0);
    }
};