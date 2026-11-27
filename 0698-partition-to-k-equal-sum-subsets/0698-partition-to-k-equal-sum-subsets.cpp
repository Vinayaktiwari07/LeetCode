
class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n = nums.size();

        int total = accumulate(nums.begin(), nums.end(), 0);

        if (total % k != 0)
            return false;

        int target = total / k;

        sort(nums.rbegin(), nums.rend());

        if (nums[0] > target)
            return false;

        int totalMasks = 1 << n;

        // dp[mask] = current subset sum modulo target
        // -1 means this mask is not reachable
        vector<int> dp(totalMasks, -1);

        dp[0] = 0;

        for (int mask = 0; mask < totalMasks; mask++) {
            if (dp[mask] == -1)
                continue;

            for (int i = 0; i < n; i++) {
                // Element already used
                if (mask & (1 << i))
                    continue;

                int newSum = dp[mask] + nums[i];

                if (newSum > target)
                    continue;

                int newMask = mask | (1 << i);

                dp[newMask] = newSum % target;
            }
        }

        return dp[totalMasks - 1] == 0;
    }
};
