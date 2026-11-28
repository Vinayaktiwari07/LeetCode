
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount + 1, 0);

        dp[0] = 1;

        const int LIMIT = INT_MAX;

        for (int coin : coins) {
            for (int i = coin; i <= amount; i++) {
                long long ways = (long long)dp[i] + dp[i - coin];

                dp[i] = (ways > LIMIT) ? LIMIT : (int)ways;
            }
        }

        return dp[amount];
    }
};
