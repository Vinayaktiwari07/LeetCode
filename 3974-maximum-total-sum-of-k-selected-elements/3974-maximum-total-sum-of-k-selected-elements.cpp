class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end(), greater<int>());
        long long ans = 0;

        for (int i = 0; i < k; i++) {
            ans += 1LL * nums[i] * max(1, mul);
            mul--;
        }

        return ans;
    }
};