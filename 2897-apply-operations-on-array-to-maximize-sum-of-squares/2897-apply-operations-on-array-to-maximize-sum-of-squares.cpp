
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long MOD = 1000000007;
        int n = nums.size();
        vector<int> bitCount(30, 0);

        long long globalOR = 0;
        for (int i = 0; i < n; i++) {
            globalOR |= nums[i];

            for (int bit = 0; bit < 30; bit++) {
                if (nums[i] & (1 << bit)) {
                    bitCount[bit]++;
                }
            }
        }

        long long ans = 0;

        for (int i = 0; i < k; i++) {
            long long x = 0;

            for (int bit = 0; bit < 30; bit++) {
                if (bitCount[bit] > 0) {
                    x |= (1LL << bit);
                    bitCount[bit]--;
                }
            }

            long long square = (x * x) % MOD;
            ans = (ans + square) % MOD;
        }

        return ans;
    }
};
