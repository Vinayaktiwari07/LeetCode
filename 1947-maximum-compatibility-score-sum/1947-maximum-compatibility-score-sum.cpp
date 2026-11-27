
class Solution {
public:
    int m, n;
    int score[8][8];
    int dp[8][256];

    int solve(int student, int mask) {
        if (student == m)
            return 0;

        int& ans = dp[student][mask];

        if (ans != -1)
            return ans;

        ans = 0;

        for (int mentor = 0; mentor < m; mentor++) {

            // Mentor already assigned
            if (mask & (1 << mentor))
                continue;

            int newMask = mask | (1 << mentor);

            int currentScore = score[student][mentor];

            ans = max(ans,
                      currentScore +
                      solve(student + 1, newMask));
        }

        return ans;
    }

    int maxCompatibilitySum(vector<vector<int>>& students,
                            vector<vector<int>>& mentors) {
        m = students.size();
        n = students[0].size();

        // Calculate compatibility scores
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {

                int same = 0;

                for (int q = 0; q < n; q++) {
                    if (students[i][q] == mentors[j][q])
                        same++;
                }

                score[i][j] = same;
            }
        }

        memset(dp, -1, sizeof(dp));

        return solve(0, 0);
    }
};
