class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int ans=0;

        for(int i=0; i<n; i++){
            int a = __builtin_popcount(i); 
            if (a == k) {
                ans += nums[i];
            }
        }

        return ans;
    }
};