class Solution {
public:
    int solve(int idx, int prev, vector<int>& nums, vector<vector<int>>& dp) {
        if (idx > nums.size() - 1) {
            return 0;
        }
        if (dp[idx][prev+1] != INT_MIN) {
            return dp[idx][prev+1];
        }
        int not_pick = solve(idx + 1, prev, nums, dp);
        int pick = 0;
        if (prev == -1 || nums[prev] < nums[idx]) {
            pick = 1 + solve(idx + 1, idx, nums, dp);
        }
        return dp[idx][prev+1]=max(pick, not_pick);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1, INT_MIN));
        return solve(0, -1, nums, dp);
    }
};