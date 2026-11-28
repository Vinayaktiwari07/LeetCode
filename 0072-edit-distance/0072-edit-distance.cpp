
class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();

        // Use the shorter string for DP space
        if (n > m) {
            swap(word1, word2);
            swap(m, n);
        }

        vector<int> dp(n + 1, 0);

        for (int j = 0; j <= n; j++) {
            dp[j] = j;
        }

        for (int i = 1; i <= m; i++) {
            int diagonal = dp[0];
            dp[0] = i;

            for (int j = 1; j <= n; j++) {
                int temp = dp[j];

                if (word1[i - 1] == word2[j - 1]) {
                    dp[j] = diagonal;
                } else {
                    dp[j] = 1 + min({
                        dp[j],       // Delete
                        dp[j - 1],   // Insert
                        diagonal    // Replace
                    });
                }

                diagonal = temp;
            }
        }

        return dp[n];
    }
};
