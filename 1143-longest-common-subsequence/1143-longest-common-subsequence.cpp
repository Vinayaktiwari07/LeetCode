
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();

        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= m; i++) {
            int diagonal = 0;

            for (int j = 1; j <= n; j++) {
                int temp = dp[j];

                if (text1[i - 1] == text2[j - 1]) {
                    dp[j] = diagonal + 1;
                } else {
                    dp[j] = max(dp[j], dp[j - 1]);
                }

                diagonal = temp;
            }
        }

        return dp[n];
    }
};
