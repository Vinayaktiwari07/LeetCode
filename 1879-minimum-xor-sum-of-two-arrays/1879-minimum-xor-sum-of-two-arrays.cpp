
class Solution {
public:
    int minimumXORSum(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int totalMasks = 1 << n;

        vector<int> dp(totalMasks, INT_MAX);

        dp[0] = 0;

        for (int mask = 0; mask < totalMasks; mask++) {
            if (dp[mask] == INT_MAX)
                continue;

            int i = __builtin_popcount(mask);

            if (i == n)
                continue;

            for (int j = 0; j < n; j++) {

                // nums2[j] already used
                if (mask & (1 << j))
                    continue;

                int newMask = mask | (1 << j);

                int cost = nums1[i] ^ nums2[j];

                dp[newMask] = min(
                    dp[newMask],
                    dp[mask] + cost
                );
            }
        }

        return dp[totalMasks - 1];
    }
};
