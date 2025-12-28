class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        long long totalSum = 0;

        for (int mask = 0; mask < (1 << n); mask++) {
            int xor_val = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    xor_val ^= nums[i];
                }
            }
            totalSum += xor_val;
        }

        return totalSum;

    }
};