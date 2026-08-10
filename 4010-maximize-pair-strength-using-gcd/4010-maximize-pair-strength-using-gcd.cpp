class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        long long ans  = INT_MIN;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                long long product = 1LL * nums[i] * nums[j];
                long long b = gcd(nums[i], nums[j]);
                long long result = product / (b * b);
                ans = max(ans, result);
            }
        }

        return ans;
    }
};